#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>
# include <stdlib.h>

class NotFoundException : public std::exception
{
	virtual const char * what() cpnst throw()
	{
		return ("Occurence not found in container.");
	}
};

template <typename T>
T	easyfind(T container, int toFind)
{
	typename T::iterator iterator = std::find(container.begin(), container.end(), toFind);
	if (iterator == container.end())
		throw NotFoundException;
	return(iterator);
}

#endif