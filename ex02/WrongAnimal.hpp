#ifndef WRONGANIMAL_HPP_
 #define WRONGANIMAL_HPP_

#include <string>
#include <iostream>

class WrongAnimal
{
	public:
		WrongAnimal();
		virtual ~WrongAnimal();
		WrongAnimal(const WrongAnimal& copyClass);
		WrongAnimal& operator=(const WrongAnimal& other);
		void makeSound() const;
		std::string getType() const;
	protected:
		std::string type_;

	private:


};
#endif