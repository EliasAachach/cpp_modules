#include "Span.hpp"

/*
* 			CONSTRUCTOR
*/

Span::Span() : _size(0)
{
}

Span::Span(unsigned int size) : _size(size)
{
}

Span::Span(Span const & src)
{
	*this = src;
}

/*
* 			DESTRUCTOR
*/

Span::~Span()
{
}

/*
* 			OVERLOAD
*/

Span &	Span::operator=(Span const & rhs)
{
    if (this == &rhs)
        return *this;
    this->_data = rhs._data;
    this->_size = rhs._size;
    return *this;
}


/*
* 			METHOD
*/

void    Span::addNumber(int toAdd)
{
    if (this->_data.size() >= this->_size)
        throw SpanFullException();
    this->_data.push_back(toAdd);
}

void	Span::isSpan()
{
	if (this->_data.size() <= 1)
		throw Span::NoSpanException();
}

unsigned int	Span::longestSpan()
{
	isSpan();
	unsigned int	max = *std::max_element(this->_data.begin(), this->_data.end());
	unsigned int	min = *std::min_element(this->_data.begin(), this->_data.end());
	return (max - min);
}

unsigned int	Span::shortestSpan()
{
	isSpan();
	std::sort(this->_data.begin(), this->_data.end());
	unsigned int	minDist = this->longestSpan();
	unsigned int	tmpDist;
	std::vector<int>::iterator	it;
	   for (it = this->_data.begin(); it != this->_data.end() - 1; it++)
    {
        tmpDist = abs(*it - *(it + 1));
        if (tmpDist < minDist)
            minDist = tmpDist;
    }
    return minDist;
}

void	Span::printVect()
{
    for (std::vector<int>::iterator it = this->_data.begin(); it != this->_data.end(); it++)
        std::cout << *it << " ";
    if (this->_data.empty())
        std::cout << "Empty vector ";
    std::cout << std::endl;
}
