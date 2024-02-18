#ifndef ICE_HPP_
 #define ICE_HPP_

#include "AMateria.hpp"

class Ice : public AMateria
{
	public :
	// Orthodox Canonical
		Ice();
		~Ice();
		Ice(const Ice& copyClass);
		Ice& operator=(const Ice& other);
		Ice* clone() const;
		std::string showType() const;
	private :

};

#endif