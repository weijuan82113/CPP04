#include "Cure.hpp"
#include "Ice.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

__attribute__((destructor))
static void destructor() {
    system("leaks -q Interface_Recap");
}

int main()
{
	{
		Cure* originalCure = new Cure();
		Cure* Copied = originalCure->clone();

		std::cout << "originalCure pointer : " << originalCure << "\n";
		std::cout << "originalCure type : " << originalCure->showType() << "\n";
		std::cout << "originalCure base type : " <<  originalCure->getType() << std::endl;

		std::cout << "Copied pointer : " << Copied << "\n";
		std::cout << "Copied type : " << Copied->showType() << "\n";
		std::cout << "Copied base type : " << Copied->getType() << std::endl;

		delete originalCure;
		delete Copied;
	}
	{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		ICharacter* me = new Character("me");

		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		tmp = src->createMateria("ice");
		me->equip(tmp);
		AMateria* deleteTmp;
		deleteTmp = src->createMateria("cure");
		me->equip(deleteTmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		delete(tmp);
		me->unequip(3);
		delete(deleteTmp);
		ICharacter* bob = new Character("bob");
		me->use(0, *bob);
		me->use(1, *bob);
		me->use(3, *bob);
		std::cout << "------------------\n"
		<< "me1 : pointer" << std::endl;
		tmp = src->createMateria("cure");
		Character* me1 = new Character("me1");
		me1->equip(tmp);
		me1->showMateria();
		std::cout << "------------------" << std::endl;
		Character* me2 = new Character("me2");
		*me2 = *me1;
		std::cout << "------------------\n"
		<< "me2 : pointer" << std::endl;
		me2->showMateria();
		std::cout << "------------------" << std::endl;
		delete bob;
		delete me;
		delete me1;
		delete me2;
		delete src;
	}
	return 0;
}