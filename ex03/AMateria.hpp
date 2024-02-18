#ifndef AMATERIA_HPP_
 #define AMATERIA_HPP_

#include <string>
#include <iostream>

class ICharacter;

class AMateria
{
	public :
		AMateria();
		AMateria(std::string const& type);
		virtual ~AMateria();
		std::string const& getType() const;
		void setType(std::string type);
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
	protected :
		std::string type_;

};


#endif