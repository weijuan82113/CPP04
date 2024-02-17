#include "Ice.hpp"

Ice::Ice():AMateria("Materia")
{
	std::cout << "<Ice> constructor" << std::endl;
	iceType_ = "ice";
}

Ice::~Ice()
{
	std::cout << "<Ice> destructor" << std::endl;
}

Ice::Ice(const Ice& copyClass)
{
	std::cout << "<Ice> copy constructor" << std::endl;
	*this = copyClass;
}

Ice& Ice::operator=(const Ice& other)
{
	std::cout << "<Ice> constructor" << std::endl;
	if (this != &other)
	{
		iceType_ = other.iceType_;
	}
}

Ice* Ice::clone() const
{
	Ice* cloneobject = new Ice();
	cloneobject->setType(getType());
}
