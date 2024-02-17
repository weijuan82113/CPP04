#ifndef AMATERIA_HPP_
 #define AMATERIA_HPP_

#include "ICharacter.hpp"
#include <string>
#include <iostream>

class AMateria
{
	public :
		AMateria();
		AMateria(std::string const& type);
		std::string const& getType() const;
		void setType(std::string type);
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
		virtual AMateria* clone() const = 0;
	private :
		std::string type_;

};


#endif