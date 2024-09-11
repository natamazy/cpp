#include "PhoneBook.hpp"

bool isEOF(void);

PhoneBook::PhoneBook(void) {
	// Init default contactCount
	this->_contactCount = 0;

	// Text to know that constructor called
	std::cout << "PhoneBook constructor called" << std::endl;

	return ;
}

PhoneBook::~PhoneBook(void) {
	// Text to know that constructor called
	std::cout << "PhoneBook destructor called" << std::endl;

	return ;
}

void PhoneBook::_printField(std::string fieldName) {
	// Output for getting input from user
	std::cout << "Enter " + fieldName << std::endl;

	return ;
}

std::string PhoneBook::_getField(std::string fieldName) {
	std::string newInput;

	// Getting input untill its not empty
	while (newInput.length() < 1) {
		PhoneBook::_printField(fieldName);
		getline(std::cin, newInput);

		// Checking for end of file (Ctrl+D infintie loop fix)
		if (isEOF()) {
			break ;
		}
	}

	return newInput;
}

void PhoneBook::add(void) {
	// Getting input from user for new contact
	std::string firstName		= PhoneBook::_getField("First Name");
	std::string lastName		= PhoneBook::_getField("Last Name");
	std::string nickName		= PhoneBook::_getField("Nickname");
	std::string phoneNumber		= PhoneBook::_getField("Phone Number");
	std::string darkestSecret	= PhoneBook::_getField("Darkest Secret");

	// Cheking for contacts overflow and changing contactCount
	if (this->_contactCount >= 8) {
		this->_contactCount -= 8;
	}

	// Adding new contact to contact array
	this->_contacts[this->_contactCount] = Contact(firstName, lastName,
													nickName, phoneNumber,
													darkestSecret);

	// Updating contact count in class
	this->_contactCount += 1;

	// Output to know that new contact added
	std::cout << "New contact added" << std::endl;

	return ;
}

void PhoneBook::search(void) {
	int	i = 0;


	while (i < this->_contactCount) {
		this->_contacts[i].print(i);
		i++;
	}

	return ;
}