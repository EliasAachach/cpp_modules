#include "Serialize.hpp"

uintptr_t	serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data *		deserialize(uintptr_t raw)
{
	return(reinterpret_cast<Data *>(raw));
}

std::ostream	&operator<<(std::ostream &flux, const Data &data)
{
	flux << "\t" << "nb : " << data.n << std::endl;
	flux << "\t" << "c : " << data.c << std::endl;
	flux << "\t" << "str : " << data.str << std::endl;
	return flux;
}