#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "<WrongCat> Constructor" << std::endl;
	type_ = "WrongCat";
}

WrongCat::~WrongCat()
{
	std::cout << "<WrongCat> Destructor" << std::endl;
}

WrongCat::WrongCat(const WrongCat& copyClass)
{
	std::cout << "<WrongCat> Copy constructor" << std::endl;
	*this = copyClass;
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
	std::cout << "<WrongCat> Copy assignment operator called" << std::endl;
	if (this != &other)
		type_ = other.type_;
	return *this;
}

void WrongCat::makeSound() const
{
	std::cout << "HoLong HoLong" << std::endl;
}