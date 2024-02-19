#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	std::cout << "<Cure> constructor" << std::endl;
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
		type_ = other.type_;
	}
	return (*this);
}

Cure* Cure::clone() const
{
	Cure* clonedObject = new Cure();
	clonedObject->setType(getType());
	return (clonedObject);
}

std::string Cure::showType() const
{
	return (type_);
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds" << std::endl;
}