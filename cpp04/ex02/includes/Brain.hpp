#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>
# include <ctime>
# include <cstdlib>


class Brain
{
	public :

	Brain();
	Brain(Brain const & src);
	~Brain();

	Brain & operator=(Brain const & rhs);

	std::string const &	getIdea(int index) const;

	private :

		std::string	_ideas[100];
};

#endif