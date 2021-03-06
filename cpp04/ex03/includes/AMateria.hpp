#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>

class AMateria
{
	protected :

	public :

		AMateria();
		AMateria(AMateria const & src);
		AMateria(std::string const & type);
		virtual ~AMateria();

		AMateria & operator=(AMateria const & rhs);

		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);

};

#endif