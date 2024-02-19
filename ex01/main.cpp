#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

__attribute__((destructor))
static void destructor() {
    system("leaks -q Animal");
}

int main()
{
	Animal		*animals[4];
	int			i;
	Animal		tryAnimal; //can instantiate the Animal class

	for ( i = 0; i < 2; i++ )
	{
		animals[i] = new Dog();
	}

	for ( ; i < 4; i++ )
	{
		animals[i] = new Cat();
	}

	for ( i = 0; i < 4; i++ )
	{
		std::cout << "Brain pointer value for animals[" << i << "]: "
			<< animals[i]->getBrain() << std::endl;
	}

	for ( i = 0; i < 4; i++ )
	{
		delete animals[i];
	}
	Cat			cats[2];

	std::cout << "cats[0] show default : " << std::endl;
	cats[0].showIdea();
	std::cout << "cats[1] show default : " << std::endl;
	cats[1].showIdea();
	cats[1].figureOut("FISH!");
	std::cout << "cats[1] show after figureOut : " << std::endl;
	cats[1].showIdea();

	std::cout << "Brain pointer value for cats[0] = " << cats[0].getBrain() << "\n"
		<< "....................for cats[1] = " << cats[1].getBrain() << std::endl;
	cats[0] = cats[1];

	std::cout << "cats[0] show after copy : " << std::endl;
	cats[0].showIdea();

	return 0;
}