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
	Cure* originalCure = new Cure();
	Cure* Copied = originalCure->clone();

	std::cout << "originalCure type : " << originalCure->showType() << "\n";
	std::cout << "originalCure base type : " <<  originalCure->getType() << std::endl;

	std::cout << "Copied type : " << Copied->showType() << "\n";
	std::cout << "Copied base type : " << Copied->getType() << std::endl;

	delete originalCure;
	delete Copied;

	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	AMateria* tmp2 = tmp;
	std::cout << tmp2->getType() << std::endl;
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;
	return 0;
}