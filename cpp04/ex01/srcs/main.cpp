#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "WrongDog.hpp"
#include "Brain.hpp"
#include <cstdlib>

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int nb = atoi(argv[1]);
		Animal	*array_animals[nb];
		for (int i = 0; i < nb; i++)
		{
			if (i % 2 == 0)
				array_animals[i] = new Cat();
			else
				array_animals[i] = new Dog();
		}
		std::cout << std::endl;
		std::cout << "__________DEEP COPY :___________" << std::endl;
		Cat	copy(* (Cat *)array_animals[0]);
		for (size_t i = 0; i < 100; i++)
		{
			std::cout << "Original : " << ((Cat *)array_animals[0])->getBrain()->getIdea(i) << std::endl;
			std::cout << "Copy     : " << copy.getBrain()->getIdea(i) << std::endl << std::endl;
		}
		std::cout << "_____________________END COPY______________________" << std::endl << std::endl;
		for (int i = 0; i < nb; i++)
			delete array_animals[i];
	}
	else
		std::cout << "[./brain] [number of animals]" << std::endl;
}