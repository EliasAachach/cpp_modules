#ifndef SERIALIZE_HPP
# define SERIALIZE_HPP

# include <iostream>
# include <stdint.h>

typedef struct sData
{
	int	n;
	char c;
	std::string str;
}				Data;

uintptr_t	serialize(Data* ptr);
Data *		deserialize(uintptr_t raw);

std::ostream	&operator<<(std::ostream &flux, const Data &obj);

#endif