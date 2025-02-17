
#include <iostream>
#include <vector>
#include "easyfind.hpp"

int main()
{
	int init_values1[] = {1, 2, 3, 4, 5};

	std::vector<int> container1(init_values1, init_values1 + sizeof(init_values1) / sizeof(*init_values1));

	try
	{
		std::vector<int>::iterator it = easyfind(container1, 3);
		std::cout << "Found: " << *it << " at position " << std::distance(container1.begin(), it) << '\n';
	}
	catch (const std::exception &e)
	{
		std::cerr << "Test failed: " << e.what() << '\n';
	}

	std::cout << "----------------------------------------------------------------------------------------------------" << std::endl;

	int init_values2[] = {1, 2, 3, 4, 5};

	std::vector<int> container2(init_values2, init_values2 + sizeof(init_values2) / sizeof(*init_values2));

	try
	{
		std::vector<int>::iterator it = easyfind(container2, 6);
		std::cout << "Found: " << *it << '\n';
	}
	catch (const std::exception &e)
	{
		std::cout << "Not found: " << e.what() << '\n';
	}

	std::cout << "----------------------------------------------------------------------------------------------------" << std::endl;

	std::vector<int> container3;

	try
	{
		std::vector<int>::iterator it = easyfind(container3, 1);
		std::cout << "Found: " << *it << '\n';
	}
	catch (const std::exception &e)
	{
		std::cout << "Empty container: " << e.what() << '\n';
	}

	std::cout << "----------------------------------------------------------------------------------------------------" << std::endl;

	int init_values4[] = {10, 20, 30, 40, 50};

	std::vector<int> container4(init_values4, init_values4 + sizeof(init_values4) / sizeof(*init_values4));

	try
	{
		std::vector<int>::iterator it = easyfind(container4, 10);
		std::cout << "Found first element: " << *it << '\n';

		it = easyfind(container4, 50);
		std::cout << "Found last element: " << *it << '\n';
	}
	catch (const std::exception &e)
	{
		std::cerr << "Boundary test failed: " << e.what() << '\n';
	}

	return 0;
}