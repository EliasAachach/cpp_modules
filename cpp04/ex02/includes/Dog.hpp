#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal
{
	public :

	Dog();
	Dog(Dog const & src);
	virtual ~Dog();

	Dog &	operator=(Dog const & rhs);

	void	makeSound() const;
	
	Brain	*getBrain() const;
	
	private :
		Brain	*_brain;
};

#endif