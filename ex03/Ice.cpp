#include "Ice.hpp"

Ice::Ice():AMateria("ice")
{
	std::cout << "<Ice> constructor" << std::endl;
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
		type_ = other.type_;
	}
	return (*this);
}

Ice* Ice::clone() const
{
	Ice* cloneobject = new Ice();
	cloneobject->setType(getType());
	return (cloneobject);
}

std::string Ice::showType() const
{
	return (type_);
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << std::endl;
}