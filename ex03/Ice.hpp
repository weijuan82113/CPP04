#ifndef ICE_HPP_
 #define ICE_HPP_

#include "AMateria.hpp"

class Ice : public AMateria
{
	public :
		Ice();
		~Ice();
		Ice(const Ice& copyClass);
		Ice& operator=(const Ice& other);
		Ice* clone() const;
	private :
		std::string iceType_;

};

#endif