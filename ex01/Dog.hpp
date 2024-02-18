#ifndef DOG_HPP
 #define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	public:
		Dog();
		~Dog();
		Dog(const Dog& copyClass);
		Dog& operator=(const Dog& other);
		void makeSound() const;
		void figureOut(const std::string& idea);
		void showIdea() const;
		Brain* getBrain() const;

	private:
		Brain*	brain_;
		int		brainIndex_;

};


#endif