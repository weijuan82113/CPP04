#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria()
{
	std::cout << "<AMateria> constructor" << std::endl;
}

AMateria::AMateria(std::string const& type)
{
	std::cout << "<AMateria> constructor" << std::endl;
	setType(type);
}

AMateria::~AMateria()
{
	std::cout << "<AMateria> destructor" << std::endl;
}

void AMateria::setType(std::string type)
{
	type_ = type;
}

std::string const& AMateria::getType() const
{
	return (type_);
}

void AMateria::use(ICharacter& target)
{
	if (type_ == "ice")
		std::cout << "* type_" << target.getName() << std::endl;
	else if (type_ == "cure")
		std::cout << "* heals " << target.getName() << "'s wounds" << std::endl;
}