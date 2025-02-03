#include <iostream>
#include "iter.hpp"

template <typename T>
void print(const T &a)
{
	std::cout << a << std::endl;
}

int main(void)
{
	int array[] = {1, 2, 3, 4, 14, 6, 6, 6};
	std::cout << "Non-const array:" << std::endl;
	iter(array, 8, print);

	const int stepanPartamian[] = {818, 244, 24, 68};
	std::cout << "\nConst array:" << std::endl;
	iter(stepanPartamian, 4, print);

	return 0;
}
