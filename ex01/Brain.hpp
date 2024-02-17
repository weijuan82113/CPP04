#ifndef BRAIN_HPP
 #define BRAIN_HPP

#include "Animal.hpp"

class Brain
{
	public :
		Brain();
		~Brain();
		Brain(const Brain& brain);
		Brain& operator=(const Brain& other);

	protected :
		std::string ideas[100];

};

#endif
