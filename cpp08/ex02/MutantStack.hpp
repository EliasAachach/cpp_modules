#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <vector>
#include <iostream>
#include <string>
#include <cstdlib>
#include <algorithm>
#include <iterator>
#include <climits>
#include <stack>
#include <list>

template <typename T>
class MutantStack : public std::stack<T>
{
public:

	/*	constructors	*/
	
	MutantStack(){};
	MutantStack(MutantStack const & src)
	{
		*this = src;
	};

	/*	destructors	*/

	~MutantStack(){};

	/*	operator	*/

	MutantStack<T>& operator=(const MutantStack<T>& rhs) 
	{
        if (*this != rhs)
        {
    		this->c = rhs.c;
        }
        return *this;
	}

	/*	methods	*/

	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;
	typedef typename std::reverse_iterator<iterator> reverse_iterator;
	typedef typename std::reverse_iterator<const_iterator> const_reverse_iterator;

	iterator begin () {return (this->c.begin());}
	iterator end () {return (this->c.end());}
	
	const_iterator cbegin () {return (this->c.cbegin());}
	const_iterator cend () {return (this->c.cend());}
	
	reverse_iterator rbegin () {return (this->c.rbegin());}
	reverse_iterator rend () {return (this->c.rend());}

	const_reverse_iterator crbegin () {return (this->c.crbegin());}
	const_reverse_iterator crend () {return (this->c.crend());}
};


#endif