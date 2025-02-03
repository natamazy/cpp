#include <iostream>
#include <cstdlib>
#include "Array.hpp"

using std::cout;
using std::endl;

#define MAX_VAL 10

void printSeparator()
{
	cout << "\033[33m#############################################\033[0m" << endl;
}

int main(void)
{
	cout << "\033[1;34m################### TESTING ###################\033[0m" << endl;

	Array<int> numbers(MAX_VAL);
	int *mirror = new int[MAX_VAL];

	srand(time(NULL));

	for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
	}

	cout << "\n\033[1;32mOriginal Array & Mirror Verification:\033[0m" << endl;
	for (int i = 0; i < MAX_VAL; i++)
	{
		cout << "numbers[" << i << "]: " << numbers[i] << " | mirror[" << i << "]: " << mirror[i] << endl;
		printSeparator();
	}

	cout << "\n\033[1;36mTesting Copy Constructor and Assignment:\033[0m" << endl;
	{
		Array<int> tmp = numbers;
		Array<int> test;
		test = tmp;

		for (int i = 0; i < MAX_VAL; i++)
		{
			cout << "tmp[" << i << "]: " << tmp[i] << " | test[" << i << "]: " << test[i] << endl;
			printSeparator();
		}
	}

	cout << "\033[35m#############################################\033[0m\n"
		 << endl;

	// Ensuring that all values are properly stored
	cout << "\033[1;33mVerifying Array Integrity:\033[0m" << endl;
	for (int i = 0; i < MAX_VAL; i++)
	{
		if (mirror[i] != numbers[i])
		{
			std::cerr << "Error: Values in the copied array do not match the original!" << endl;
			delete[] mirror;
			return 1;
		}
	}

	cout << "✅ All values match successfully!" << endl;

	cout << "\033[35m#############################################\033[0m\n"
		 << endl;

	cout << "\033[1;31mTesting Out-of-Bounds Access:\033[0m" << endl;
	try
	{
		cout << "Attempting to access index -2..." << endl;
		numbers[-2] = 0;
	}
	catch (const std::exception &e)
	{
		std::cerr << "Caught Exception: " << e.what() << '\n';
	}

	printSeparator();

	try
	{
		cout << "Attempting to access index MAX_VAL..." << endl;
		numbers[MAX_VAL] = 0;
	}
	catch (const std::exception &e)
	{
		std::cerr << "Caught Exception: " << e.what() << '\n';
	}

	cout << "\n\033[1;32m✅ All tests completed successfully!\033[0m" << endl;

	delete[] mirror;
	return 0;
}
