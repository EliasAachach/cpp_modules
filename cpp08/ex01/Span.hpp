#ifndef SPAN_HPP
# define SPAN_HPP

# include <algorithm>
# include <iostream>
# include <vector>

class Span
{

private:

	std::vector<int>	_data;
	unsigned int	_size;

public:

	Span();
	Span(unsigned int size);
	Span(Span const & src);
	~Span();

	Span &	operator=(Span const & rhs);

	void	addNumber(int toAdd);
	void	fillRange(std::vector<int>::iterator begin, std::vector<int>::iterator end)
	{
    	while (begin != end)
		{
        	addNumber(*begin);
        	begin++;
		}
		
	}
	unsigned int	shortestSpan();
	unsigned int	longestSpan();
	void			isSpan();
	void			printVect();

	class SpanFullException : public std::exception
	{
		virtual const char *what() const throw()
		{
			return ("Span is full.");
		}
	};
	class NoSpanException : public std::exception
	{
		virtual const char *what() const throw()
		{
			return ("You need at least 2 elements to have a Span.");
		}
	};

};


#endif