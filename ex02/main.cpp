#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

__attribute__((destructor))
static void destructor() {
    system("leaks -q Animal");
}

int main()
{
	AAnimal		*animals[4];
	int			i;
	//AAnimal	 	wrongAnimal; // Can not complie, not instantiable

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

	cats[1] = cats[0];
	std::cout << "Brain pointer value for cats[0] = " << cats[0].getBrain()
		<< std::endl << "....................for cats[1] = "
		<< cats[1].getBrain() << std::endl;



	return 0;
}