#include "Litteral.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2) {
		std::cerr << "Usage:" << std::endl;
		std::cerr << argv[0] << "<string_to_convert>" << std::endl;
		return (1);
	}
	Litteral litteral(argv[1]);
	litteral.print();
	return (0);
}