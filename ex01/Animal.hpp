#ifndef ANIMAL_HPP
 #define ANIMAL_HPP

#include <string>
#include <iostream>
#include "Brain.hpp"

class Animal
{
	public:
		Animal();
		virtual ~Animal();
		Animal(const Animal& copyClass);
		virtual Animal& operator=(const Animal& other);
		virtual void makeSound() const;
		virtual void figureOut(const std::string& idea);
		virtual void showIdea() const;
		std::string getType() const;
		virtual Brain* getBrain() const;

	protected:
		std::string type_;
};
#endif