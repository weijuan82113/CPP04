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
	std::cout << "<AMateria> use materia at" << target.getName() << std::endl;
}