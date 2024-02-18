#ifndef AANIMAL_HPP
 #define AANIMAL_HPP

#include "Brain.hpp"

class AAnimal
{
	public:
		AAnimal();
		virtual ~AAnimal();
		AAnimal(const AAnimal& copyClass);
		virtual AAnimal& operator=(const AAnimal& other);
		virtual void makeSound() const = 0;
		virtual void figureOut(const std::string& idea) = 0;
		virtual void showIdea() const = 0;
		std::string getType() const;
		virtual Brain* getBrain() const = 0;

	protected:
		std::string type_;
};
#endif