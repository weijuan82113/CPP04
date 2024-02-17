#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "<WrongAnimal> Construtor" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "<WrongAnimal> Destrutor" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& copyClass)
{
	std::cout << "<WrongAnimal> Copy Constructor" << std::endl;
	*this = copyClass;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
	std::cout << "<WrongAnimal> Copy assignment operator called" << std::endl;
	if (this != &other)
		type_ = other.type_;
	return *this;
}

void WrongAnimal::makeSound() const
{
	std::cout << "tha WrongAnimal make some voice" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (type_);
}