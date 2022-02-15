#include "iter.hpp"

int main()
{
	std::string strArray[3] = {"this", "is a", "template"};
	iter(strArray, 3, displayData);


	int	intArray[4] = {0, 1, 2, 3};
	iter(intArray, 4, displayData);

	int const	intConstArray[6] = {4, 5, 6, 7, 8, 9};
	iter(intConstArray, 6, displayData);
}