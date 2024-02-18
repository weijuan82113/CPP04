#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "<Dog> constructor" << std::endl;
	type_ = "Dog";
	brain_ = new Brain();
	brainIndex_ = 0;
	for(int i = 0; i<100; i++)
	{
		std::string idea = "dog default idea" ;
		figureOut(idea);
	}
}

Dog::~Dog()
{
	std::cout << "<Dog> destructor" << std::endl;
	delete brain_;
}

Dog::Dog(const Dog& copyClass)
{
	std::cout << "<Dog> Copy constructor" << std::endl;
	*this = copyClass;
}

Dog& Dog::operator=(const Dog& other)
{
	std::cout << "<Dog> Copy assignment operator called" << std::endl;
	type_ = other.type_;
	*brain_ = *(other.brain_);
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "Wang Wang" << std::endl;
}

void Dog::figureOut(const std::string& idea)
{
	brain_->makeIdea(idea, brainIndex_);
	if(brainIndex_ == 99)
		brainIndex_ = 0;
	else
		brainIndex_ ++;
}

void Dog::showIdea() const
{
	const std::string *ideas = brain_->getIdeas();
	for (int i=0; i < 100; i++)
	{
		std::cout << "idea" << i << " : " << ideas[i] << ",";
	}
	std::cout << std::endl;
}

Brain* Dog::getBrain() const
{
	return (brain_);
}
