#include "Dog.hpp"


Dog::Dog()
{
	std::cout << "<Dog> Constructor" << std::endl;
	type_ = "Dog";
}
Dog::~Dog()
{
	std::cout << "<Dog> Destructor" << std::endl;
}

Dog::Dog(const Dog& copyClass)
{
	std::cout << "<Dog> Copy constructor" << std::endl;
	*this = copyClass;
}

Dog& Dog::operator=(const Dog& other)
{
	std::cout << "<Dog> Copy assignment operator called" << std::endl;
	if (this != &other)
		type_ = other.type_;
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "Wang Wang" << std::endl;
}