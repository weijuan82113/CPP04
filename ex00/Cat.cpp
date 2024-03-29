#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "<Cat> constructor" << std::endl;
	type_ = "Cat";
}

Cat::~Cat()
{
	std::cout << "<Cat> destructor" << std::endl;
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
	std::cout << "Miao Miao" << std::endl;
}