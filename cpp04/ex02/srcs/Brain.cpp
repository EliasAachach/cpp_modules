#include "Brain.hpp"

/*
* 			CONSTRUCTOR
*/

Brain::Brain()
{
	std::cout << "Brain constructor called." << std::endl;

	for(int i = 0; i < 100; i++)
	{
		if (i % 2 == 0)
			this->_ideas[i] = "Good Idea";
		else
			this->_ideas[i] = "Bad Idea";
	}
}

Brain::Brain(Brain const & src)
{
	(void)src;
	std::cout << "Brain copy constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
	{
		if (i % 2 == 0)
			this->_ideas[i] = "Good Idea";
		else
			this->_ideas[i] = "Bad Idea";
	}
}

/*
* 			DESTRUCTOR
*/

Brain::~Brain()
{
	std::cout << "Brain destructor called." << std::endl;
}

/*
* 			OVERLOAD
*/

Brain	& Brain::operator=(Brain const & rhs)
{
	if (this != &rhs)
	{
		for (size_t i = 0; i < 100 ; i++)
		{
			if (i % 2 == 0)
				this->_ideas[i] = "Good Idea";
			else
				this->_ideas[i] = "Bad Idea";
		}
	}
	return *this;
}

/*
* 			ACCESSOR
*/

std::string const & Brain::getIdea(int index) const
{
	return (this->_ideas[index]);
}