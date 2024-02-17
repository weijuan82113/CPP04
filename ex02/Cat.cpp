#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "<Cat> Constructor" << std::endl;
	type_ = "Cat";
}

Cat::~Cat()
{
	std::cout << "<Cat> Destructor" << std::endl;
}

Cat::Cat(const Cat& copyClass)
{
	std::cout << "<Cat> Copy constructor" << std::endl;
	*this = copyClass;
}

Cat& Cat::operator=(const Cat& other)
{
	std::cout << "<Cat> Copy assignment operator called" << std::endl;
	Animal::operator=(other);
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "Maio Maio" << std::endl;
}

std::string Cat::getType() const
{
	return (Animal::getType());
}