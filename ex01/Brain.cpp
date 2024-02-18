#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "<Brain> constructor" << std::endl;
	ideas_ = new std::string[100];
}

Brain::~Brain()
{
	std::cout << "<Brain> destructor" << std::endl;
	delete[] ideas_;
}

Brain::Brain(const Brain& brain)
{
	std::cout << "<Brain> copy constructor" << std::endl;
	*this = brain;
}

Brain& Brain::operator=(const Brain& other)
{
	std::cout << "<Brain> copy assignment operator" << std::endl;
	int i = 0;
	if (this != &other)
	{
		while (i < 100)
		{
			ideas_[i] = other.ideas_[i];
			i ++;
		}
	}
	return *this;
}

void Brain::makeIdea(const std::string &idea, int index)
{
	if (index < 0 || index > 99)
		return;
	ideas_[index] = idea;
}

const std::string* Brain::getIdeas() const
{
	return (ideas_);
}