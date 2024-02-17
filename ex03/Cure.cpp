
#include "Cure.hpp"

Cure::Cure() : AMateria("Materia")
{
	std::cout << "<Cure> constructor" << std::endl;
	cureType_ = "cure";
}

Cure::~Cure()
{
	std::cout << "<Cure> destructor" << std::endl;
}

Cure::Cure(const Cure& copyClass)
{
	std::cout << "<Cure> copy constructor" << std::endl;
	*this = copyClass;
}

Cure& Cure::operator=(const Cure& other)
{
	std::cout << "<Cure> copy assignment" << std::endl;
	if (this != &other)
	{
		cureType_ = other.cureType_;
	}
}

Cure* Cure::clone() const
{
	Cure* clonedObject = new Cure();
	clonedObject->setType(getType());
}
