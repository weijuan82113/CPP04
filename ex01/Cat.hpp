#ifndef CAT_HPP
 #define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	public:
		Cat();
		~Cat();
		Cat(const Cat& copyClass);
		Cat& operator=(const Cat&other);
		void makeSound() const;
		void figureOut(const std::string& idea);
		void showIdea() const;
		Brain* getBrain() const;

	private:
		Brain*	brain_;
		int		brainIndex_;

};


#endif