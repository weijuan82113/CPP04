#ifndef DOG_HPP_
 #define DOG_HPP_

#include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog();
		~Dog();
		Dog(const Dog& copyClass);
		Dog& operator=(const Dog& other);
		void makeSound() const;
		std::string getType() const;
	private:

};


#endif