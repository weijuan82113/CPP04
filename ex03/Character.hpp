#ifndef CHARACTER_HPP_
 #define CHARACTER_HPP_

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
	public :
	// Orthodox Canonical
		Character();
		Character(const std::string& name);
		~Character();
		Character(const Character & copyClass);
		Character& operator=(const Character &other);
		std::string const& getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
		void showMateria();

	private :
		std::string	name_;
		AMateria* slot_[4];
};

#endif