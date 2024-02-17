#ifndef DOG_HPP
 #define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog();
		~Dog();
		Dog(const Dog& copyClass);
		Dog& operator=(const Dog& other);
		void makeSound() const;
	private:

};


#endif