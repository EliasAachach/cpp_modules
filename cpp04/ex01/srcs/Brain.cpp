#include "Brain.hpp"

/*
* 			CONSTRUCTOR
*/

Brain::Brain()
{
	std::srand(std::time(NULL));
	std::cout << "Brain constructor called." << std::endl;

	std::string ideas[] =
	{
		"Good idea",
		"Weird idea",
		"Awesome idea",
		"Genius idea",
		"Awkward idea",
		"Bad idea",
		"False idea",
		"True idea",
		"Terrible idea",
		"Dumb idea",
		"Intelligent idea",
	};

	for(int i = 0; i < 100; i++)
	{
		this->_ideas[i] = ideas[std::rand() % (sizeof(ideas) / sizeof(std::string))];
	}
}

Brain::Brain(Brain const & src)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = src;
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
			this->_ideas[i] = rhs._ideas[i];
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