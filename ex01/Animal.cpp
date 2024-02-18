#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "<Animal> Construtor" << std::endl;
}

Animal::~Animal()
{
	std::cout << "<Animal> Destrutor" << std::endl;
}

Animal::Animal(const Animal& copyClass)
{
	std::cout << "<Animal> Copy constructor" << std::endl;
	*this = copyClass;
}

Animal& Animal::operator=(const Animal& other)
{
	std::cout << "<Animal> Copy assignment operator called" << std::endl;
	if (this != &other)
		type_ = other.type_;
	return *this;
}

void Animal::makeSound() const
{
	std::cout << "<Animal> make some voice" << std::endl;
}

void Animal::figureOut(const std::string& idea)
{
	std::cout << "<Animal> figure out" << idea << std::endl;
}

void Animal::showIdea() const
{
	std::cout << "<Animal> show idea" << std::endl;
}

std::string Animal::getType() const
{
	return (type_);
}

Brain* Animal::getBrain() const
{
	std::cout << "<Animal> getBrain" << std::endl;
	return NULL;
}