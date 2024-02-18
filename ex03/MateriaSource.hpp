#ifndef MATERIASOURCE_HPP_
 #define MATERIASOURCE_HPP_

#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	public :
		MateriaSource();
		~MateriaSource();
		MateriaSource(MateriaSource& copyClass);
		MateriaSource& operator =(MateriaSource& other);
		void learnMateria(AMateria *m);
		AMateria* createMateria(std::string const &type);

	private :
		std::string*	type_;
		AMateria*		materia_[4];
		int				materiaIndex_;
};


#endif