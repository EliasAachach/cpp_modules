#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T>
void	displayData(T const &data)
{
	std::cout << "data is : \"" << data <<"\"" << std::endl;
}

template <typename T>
void	iter(T const *array, int const size, void	fct(const T &))
{
	for(int i = 0; i < size; i++)
		fct(array[i]);
}

#endif