#include "iter.hpp"

int main()
{
	char *strArray[3] =
	{
		"this",
		"is a",
		"template"
	};
	iter(strArray, 3, displayData);
}