#include <iostream>
#include "Contact.hpp"
#include "PhoneBook.hpp"

int main() {
	PhoneBook phonebook;
	int i;

	i = 0;
	
	std::string prompt;
	std::cin >> prompt;

	while (prompt != "EXIT") {
		if (prompt == "ADD") {
				phonebook.add();
			}
		
			std::cin >> prompt;
		}

	return (0);
}