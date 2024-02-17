#ifndef CAT_HPP_
 #define CAT_HPP_

 #include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat();
		~Cat();
		Cat(const Cat& copyClass);
		Cat& operator=(const Cat&other);
		void makeSound() const;
		std::string getType() const;
	private:

};


#endif