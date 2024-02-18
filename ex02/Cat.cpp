#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "<Cat> constructor" << std::endl;
	type_ = "Cat";
	brain_ = new Brain();
	brainIndex_ = 0;
	for(int i = 0; i<100; i++)
	{
		std::string idea = "cat default idea" ;
		figureOut(idea);
	}
}

Cat::~Cat()
{
	std::cout << "<Cat> destructor" << std::endl;
	delete brain_;
}

Cat::Cat(const Cat& copyClass)
{
	std::cout << "<Cat> Copy constructor" << std::endl;
	*this = copyClass;
}

Cat& Cat::operator=(const Cat& other)
{
	std::cout << "<Cat> Copy assignment operator called" << std::endl;
	type_ = other.type_;
	*brain_ = *(other.brain_);
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "Maio Maio" << std::endl;
}

void Cat::figureOut(const std::string& idea)
{
	brain_->makeIdea(idea, brainIndex_);
	if(brainIndex_ == 99)
		brainIndex_ = 0;
	else
		brainIndex_ ++;
}

void Cat::showIdea() const
{
	const std::string *ideas = brain_->getIdeas();
	for (int i=0; i < 100; i++)
	{
		std::cout << "idea" << i << " : " << ideas[i] << ",";
	}
	std::cout << std::endl;
}

Brain* Cat::getBrain() const
{
	return (brain_);
}