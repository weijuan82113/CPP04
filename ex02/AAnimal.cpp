#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	std::cout << "<AAnimal> Construtor" << std::endl;
}

AAnimal::~AAnimal()
{
	std::cout << "<AAnimal> Destrutor" << std::endl;
}

AAnimal::AAnimal(const AAnimal& copyClass)
{
	std::cout << "<AAnimal> Copy constructor" << std::endl;
	*this = copyClass;
}

AAnimal& AAnimal::operator=(const AAnimal& other)
{
	std::cout << "<AAnimal> Copy assignment operator called" << std::endl;
	if (this != &other)
		type_ = other.type_;
	return *this;
}

void AAnimal::makeSound() const
{
	std::cout << "<AAnimal> make some voice" << std::endl;
}

void AAnimal::figureOut(const std::string& idea)
{
	std::cout << "<AAnimal> figure out" << idea << std::endl;
}

void AAnimal::showIdea() const
{
	std::cout << "<AAnimal> show idea" << std::endl;
}

std::string AAnimal::getType() const
{
	return (type_);
}

Brain* AAnimal::getBrain() const
{
	std::cout << "<AAnimal> getBrain" << std::endl;
	return NULL;
}