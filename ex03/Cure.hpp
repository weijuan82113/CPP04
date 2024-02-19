#ifndef CURE_HPP_
 #define CURE_HPP_

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria
{
	public :
	// Orthodox Canonical
		Cure();
		~Cure();
		Cure(const Cure& copyClass);
		Cure& operator=(const Cure& other);
		Cure* clone() const;
		std::string showType() const;
		void use(ICharacter& target);
	private :
};

#endif