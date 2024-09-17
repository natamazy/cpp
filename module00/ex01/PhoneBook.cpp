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
		if (std::isalpha(field[i]) == false)
			return false;
	}

	return true;
}

bool isAllNums(std::string field) {
	int len = field.length();

	for (int i = 0; i < len; i++) {
		if (std::isdigit(field[i]) == false)
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

	return (false);
}

std::string PhoneBook::_getField(std::string fieldName, int validation) {
	std::string newInput;

	// Getting input untill its not empty
	while (newInput.length() < 1) {
		PhoneBook::_printField(fieldName);
		getline(std::cin, newInput);
		if (checkingAlnums(newInput, validation) == false)
			newInput = "";

		// Checking for end of file (Ctrl+D infintie loop fix)
		if (isEOF()) {
			break ;
		}
	}

	return newInput;
}

void PhoneBook::add(void) {
	// Getting input from user for new contact
	std::string firstName		= PhoneBook::_getField("First Name", ONLYLETTERS);
	std::string lastName		= PhoneBook::_getField("Last Name", ONLYLETTERS);
	std::string nickName		= PhoneBook::_getField("Nickname", NOVALID);
	std::string phoneNumber		= PhoneBook::_getField("Phone Number", ONLYNUMBERS);
	std::string darkestSecret	= PhoneBook::_getField("Darkest Secret", NOVALID);

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

	if (counter == 0) {
		std::cout << "No contacts in your phonebook." << std::endl;
		return ;
	}

	std::cout << std::setw(10) << "Id" << "|" << std::setw(10) << "First Name" << "|" << std::setw(10) << "Last Name" << "|" << std::setw(10) << "Nick Name" << std::endl;
	while (i < counter) {
		this->_contacts[i].print(i);
		i++;
	}
	std::cout << "Enter index of contact you want to know more about. Or hit enter to continue." << std::endl;

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
			std::cout << std::endl;
			return ;
		}

		// Checking for end of file (Ctrl+D infintie loop fix)
		if (isEOF()) {
			break ;
		}
	}
	return ;
}