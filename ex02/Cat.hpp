#ifndef CAT_HPP
 #define CAT_HPP

#include "AAnimal.hpp"

class Cat : public AAnimal
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