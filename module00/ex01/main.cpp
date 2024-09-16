#include "PhoneBook.hpp"

// Checking for end of file (Ctrl+D infintie loop fix)
bool isEOF(void) {
	if (std::cin.eof()) {
		return (true);
	}

	return (false);
}

int main(void) {
	PhoneBook	newPhoneBook;
	std::string	input;

	std::cout << "Use commands - ADD, SEARCH, EXIT" << std::endl;
	// Getting input untill EXIT inputed by user
	while (getline(std::cin, input), input != "EXIT") {
		// Adding, searching or outputting correct inputs
		if (input == "ADD") {
			newPhoneBook.add();
		} else if (input == "SEARCH") {
			newPhoneBook.search();
		} else {
			std::cout << "Correct commands are - ADD, SEARCH, EXIT" << std::endl;
		}

		// Checking for end of file (Ctrl+D infintie loop fix)
		if (isEOF()) {
			break ;
		}
	}
}