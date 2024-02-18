#include "Character.hpp"

Character::Character()
{
	std::cout << "<Character> Default Constrctor" << std::endl;
	*slot_ = NULL;
}

Character::Character(const std::string &name) : name_(name)
{
	std::cout << "<Character> Constrctor" << std::endl;
	*slot_ = NULL;
}

Character::~Character()
{
	std::cout << "<Character> Destrctor" << std::endl;
	for (int i = 0; i < 4; i ++)
	{
		if (slot_[i])
			delete slot_[i];
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
			*slot_[i] = *other.slot_[i];
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
	while(i < 4)
	{
		i ++;
	}
	if (i == 4)
		return;
	*slot_[i] = *m;
}

void Character::unequip(int idx)
{
	if(slot_[idx])
		delete slot_[idx];
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