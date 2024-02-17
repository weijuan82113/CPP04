#ifndef BRAIN_HPP_
 #define BRAIN_HPP_

#include "Animal.hpp"

class Brain
{
	public :
		Brain();
		~Brain();
		Brain(const Brain& brain);
		Brain& operator=(const Brain& other);

	protected :
		std::string ideas_[100];

};

#endif
