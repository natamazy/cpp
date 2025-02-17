#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>

template <typename T>
typename T::const_iterator easyfind(const T &integers, int integer)
{
	typename T::const_iterator it = std::find(integers.begin(), integers.end(), integer);

	if (it == integers.end())
	{
		throw std::runtime_error("Not found!");
	}

	return (it);
}

template <typename T>
typename T::iterator easyfind(T &integers, int integer)
{
	typename T::iterator it = std::find(integers.begin(), integers.end(), integer);

	if (it == integers.end())
	{
		throw std::runtime_error("Not found!");
	}

	return (it);
}

#endif