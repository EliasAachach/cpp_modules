#include "Serialize.hpp"

int main()
{
	Data	data;

	data.n = 42;
	data.ptrn = &data.n;
	data.c = 'e';
	data.str = "quarante deux";

	std::cout << "Data creation :" << std::endl << &data << std::endl;
	std::cout << "Values :" << std::endl << data << std::endl;
	uintptr_t serial = serialize(&data);
	Data deserial = *deserialize(serial);
	std::cout << "After serialize/deserialize :" << std::endl << &deserial << std::endl;
	std::cout << "Values :" << std::endl << deserial << std::endl;
}