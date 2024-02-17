#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound! j->makeSound();
	j->makeSound(); //will output the cat sound! j->makeSound();
	meta->makeSound();
	delete(meta);
	delete(j);
	delete(i);
	WrongAnimal* wrongMeta = new WrongAnimal();
	WrongAnimal* k = new WrongCat();
	std::cout << k->getType() << " " << std::endl;
	k->makeSound();
	*wrongMeta = *k;
	std::cout << wrongMeta->getType() << " " << std::endl;
	wrongMeta->makeSound();
	delete(wrongMeta);
	delete(k);
	return 0;
}