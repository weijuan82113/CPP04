#include "Character.hpp"

Character::Character()
{
	std::cout << "<Character> Constrctor" << std::endl;
}

Character::~Character()
{
	std::cout << "<Character> Destrctor" << std::endl;
}

Character::Character(const Character &copyClass)
{
	std::cout << "<Charactor> Copy Constructor" << std::endl;
	*this = copyClass;
}

Character& Character::operator=(const Character &other)
{
	std::cout << "<Charactor> Copy Assignment Copy Operator" << std::endl;
	if (this != &other)
	{
		this->name_ = other.name_;
		//slot....
	}

}


std::string const& Character::getName() const
{
	return (name_);
}