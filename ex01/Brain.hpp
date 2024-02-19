#ifndef BRAIN_HPP
 #define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
	public :
		Brain();
		~Brain();
		Brain(const Brain& brain);
		Brain& operator=(const Brain& other);
		void makeIdea(const std::string &idea, int index);
		const std::string* getIdeas() const;

	protected :
		std::string *ideas_;
};

#endif
