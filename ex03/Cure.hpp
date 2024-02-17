#ifndef CURE_HPP_
 #define CURE_HPP_

#include "AMateria.hpp"

class Cure : public AMateria
{
	public :
		Cure();
		~Cure();
		Cure(const Cure& copyClass);
		Cure& operator=(const Cure& other);
		Cure* clone() const;
	private :
		std::string cureType_;
};

#endif