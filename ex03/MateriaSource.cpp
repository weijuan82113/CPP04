#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "<MateriaSource> constructor" << std::endl;
	type_ = new std::string[4];
	materiaIndex_ = 0;
}

MateriaSource::~MateriaSource()
{
	std::cout << "<MateriaSource> destructor" << std::endl;
	delete[] type_;
	for (int i = 0; i < 4; i ++)
	{
		if (materia_[i])
			delete materia_[i];
	}
}

void MateriaSource::learnMateria(AMateria *m)
{
	materia_[materiaIndex_] = m;
	type_[materiaIndex_] = m->getType();
	if (materiaIndex_ == 3)
		materiaIndex_ = 0;
	else
		materiaIndex_ ++;
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i ++)
	{
		if (type_[i] == type)
			return (materia_[i]->clone());
	}
	return 0;
}