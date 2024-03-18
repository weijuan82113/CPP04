#include "Character.hpp"

Character::Character()
{
	std::cout << "<Character> Default Constrctor" << std::endl;
	for (int i =  0; i < 4 ; i ++)
	{
		slot_[i] = NULL;
	}
}

Character::Character(const std::string &name) : name_(name)
{
	std::cout << "<Character> Constrctor" << std::endl;
	for (int i =  0; i < 4 ; i ++)
	{
		slot_[i] = NULL;
	}
}

Character::~Character()
{
	std::cout << "<Character> Destrctor" << std::endl;
	for (int i = 0; i < 4; i ++)
	{
		if (slot_[i])
		{
			delete slot_[i];
		}
	}
}

Character::Character(const Character &copyClass)
{
	std::cout << "<Charactor> Copy constructor" << std::endl;
	*this = copyClass;
}

Character& Character::operator=(const Character &other)
{
	std::cout << "<Charactor> Copy Assignment Copy Operator" << std::endl;
	if (this != &other)
	{
		this->name_ = other.name_;
		int i = 0;
		while (i < 4)
		{
			delete (slot_[i]);
			if (other.slot_[i])
				slot_[i] = other.slot_[i]->clone();
			i ++;
		}
	}
	return *this;
}

std::string const& Character::getName() const
{
	return (name_);
}

void Character::equip(AMateria* m)
{
	int i = 0;
	while(slot_[i] && i < 4)
	{
		i ++;
	}
	if (i == 4)
		return;
	slot_[i] = m;
}

void Character::unequip(int idx)
{
	if(slot_[idx])
		slot_[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (!slot_[idx])
	{
		std::cout << "the index of slot is empty" << std::endl;
		return ;
	}
	slot_[idx]->use(target);
}

void Character::showMateria()
{
	int i = 0;
	while(i < 4)
	{
		std::cout << i << ":" << this->slot_[i] << "\n";
		if (i == 3)
			std::cout << std::endl;
		i ++;
	}
}