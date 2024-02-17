#include "Animal.hpp"
#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "<Brain> Constructor" << std::endl;
}

Brain::~Brain()
{
	std::cout << "<Brain> destructor" << std::endl;
}

Brain::Brain(const Brain& brain)
{
	std::cout << "<Brain> copy constructor" << std::endl;
	*this = brain;
}

Brain& Brain::operator=(const Brain& other)
{
	int i = 0;
	std::cout << "<Brain> copy assignment operator" << std::endl;
	if (this != &other)
	{
		while (i < 100)
		{
			ideas[i] = other.ideas[i];
			i ++;
		}
	}
	return *this;
}