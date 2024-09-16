#include "PhoneBook.hpp"

bool isEOF(void);

PhoneBook::PhoneBook(void) {
	// Init default contactCount
	this->_contactCount = 0;
	this->_isFull = false;

	// // Text to know that constructor called
	// std::cout << "PhoneBook constructor called" << std::endl;

	return ;
}

PhoneBook::~PhoneBook(void) {
	// // Text to know that destructor called
	// std::cout << "PhoneBook destructor called" << std::endl;

	return ;
}

void PhoneBook::_printField(std::string fieldName) {
	// Output for getting input from user
	std::cout << "Enter " + fieldName << std::endl;

	return ;
}

bool isAllAlpha(std::string field) {
	int len = field.length();

	for (int i = 0; i < len; i++) {
		if (!std::isalpha(field[0]))
			return false;
	}

	return true;
}

bool isAllNums(std::string field) {
	int len = field.length();

	for (int i = 0; i < len; i++) {
		if (!std::isdigit(field[0]))
			return false;
	}

	return true;
}

bool checkingAlnums(std::string field, int validation) {
	if (validation == NOVALID)
		return (true);

	if (validation == ONLYLETTERS)
		return (isAllAlpha(field));

	if (validation == ONLYNUMBERS)
		return (isAllNums(field));
}

std::string PhoneBook::_getField(std::string fieldName, int validation) {
	std::string newInput;

	// Getting input untill its not empty
	while (newInput.length() < 1 && checkingAlnums(fieldName, validation)) {
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
		if (!this->_isFull)
			this->_isFull = true;

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

int PhoneBook::_isCorrectInput(std::string input) {
	if (input.length() == 1 && std::isdigit(input[0])) {
		int i = input[0] - '0';

		if (i > -1 && i < ((this->_isFull == true) ? 8 : this->_contactCount)) {
			return (i);
		}
	}

	return (-1);
}

void PhoneBook::search(void) {
	int			i = 0;
	std::string	input;

	// Printing list of contacts
	int counter = ((this->_isFull == true) ? 8 : this->_contactCount);

	while (i < counter) {
		this->_contacts[i].print(i);
		i++;
	}

	while (getline(std::cin, input), input != "") {
		// Adding, searching or outputting correct inputs
		int index = this->_isCorrectInput(input);

		if (index == -1) {
			std::cout << "Input index in range of your phonebook" << std::endl;
			std::cout << "Or just hit enter to go back." << std::endl;
		} else {
			std::cout << "First Name: " << this->_contacts[index].getFirstName() << std::endl;
			std::cout << "Last Name: " << this->_contacts[index].getLastName() << std::endl;
			std::cout << "Nickname: " << this->_contacts[index].getNickName() << std::endl;
			std::cout << "Phone Number: " << this->_contacts[index].getPhoneNumber() << std::endl;
			std::cout << "Darkest secret: " << this->_contacts[index].getDarkestSecret() << std::endl;
		}

		// Checking for end of file (Ctrl+D infintie loop fix)
		if (isEOF()) {
			break ;
		}
	}
	return ;
}