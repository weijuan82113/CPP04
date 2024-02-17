#ifndef CHARACTER_HPP_
 #define CHARACTER_HPP_

#include "ICharacter.hpp"

class Character : ICharacter
{
	public :
	// Orthodox Canonical
		Character();
		~Character();
		Character(const Character & copyClass);
		Character& operator=(const Character &other);

		std::string const& getName() const;
		void equip(AMateria* m);
		void unequip(int idx) = 0;
		void use(int idx, ICharacter& target) = 0;

	private :
		std::string	name_;
		//AMateria slot_[4]; cloneと関係がありそうなので調べる


};

#endif