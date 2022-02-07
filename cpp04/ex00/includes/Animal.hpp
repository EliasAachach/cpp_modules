#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
	public : 

		Animal();
		Animal(std::string const type);
		Animal(Animal const & src);
		virtual	~Animal();

		Animal	&	operator=(Animal const & rhs);

		virtual void	makeSound() const;
		std::string	getType() const;

		virtual void	makeSound() const;

	protected :

		std::string _type;

};

#endif