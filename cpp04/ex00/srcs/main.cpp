#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "WrongDog.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* doggo = new Dog();
	const Animal* cuteCat = new Cat();
	std::cout << doggo->getType() << " " << std::endl;
	std::cout << cuteCat->getType() << " " << std::endl;
	cuteCat->makeSound(); //will output the cat sound!
	doggo->makeSound();
	meta->makeSound();
	delete meta;
	delete doggo;
	delete cuteCat;
	std::cout << std::endl;
	const WrongAnimal* wrongDoggo = new WrongDog();
	const WrongAnimal* wrongCuteCat = new WrongCat();
	std::cout << wrongDoggo->getType() << " " << std::endl;
	std::cout << wrongCuteCat->getType() << " " << std::endl;
	wrongCuteCat->makeSound(); //will output the cat sound!
	wrongDoggo->makeSound();
	delete wrongDoggo;
	delete wrongCuteCat;
	return 0;
}

