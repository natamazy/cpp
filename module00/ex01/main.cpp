#include "PhoneBook.hpp"

int main(void) {
	PhoneBook	newPhoneBook;
	std::string	input;

	// Getting input untill EXIT inputed by user
	while (getline(std::cin, input), input != "EXIT") {
		// Adding, searching or outputting correct inputs
		if (input == "ADD") {
			newPhoneBook.add();
		} else if (input == "SEARCH") {
			std::cout << "SEARCH!" << std::endl;
		} else {
			std::cout << "Correct inputs are - ADD, SEARCH, EXIT" << std::endl;
		}
	}
}