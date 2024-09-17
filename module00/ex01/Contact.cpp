#include "Contact.hpp"

Contact::Contact(void) {
	// // Text to know that constructor called
	// std::cout << "Contact constructor called" << std::endl;

	return ;
}

Contact::Contact(std::string firstName, std::string lastName, std::string nickName, std::string phoneNumber, std::string darkestSecret) {
	this->_firstName = firstName;
	this->_lastName = lastName;
	this->_nickName = nickName;
	this->_phoneNumber = phoneNumber;
	this->_darkestSecret = darkestSecret;
}

Contact::~Contact(void) {
	// // Text to know that destructor called
	// std::cout << "Contact destructor called" << std::endl;

	return ;
}

// Accessors for first name
std::string Contact::getFirstName(void) {
	return this->_firstName;
}

// Accessors for last name
std::string Contact::getLastName(void) {
	return this->_lastName;
}

// Accessors for nickname
std::string Contact::getNickName(void) {
	return this->_nickName;
}

// Accessors for phone number
std::string Contact::getPhoneNumber(void) {
	return this->_phoneNumber;
}

// Accessors for darkest secret
std::string Contact::getDarkestSecret(void) {
	return this->_darkestSecret;
}

// Method to print one contact
void Contact::print(int i) {
	std::cout << std::setw(10) << i;
	std::cout << "|" << std::setw(10) << ((this->_firstName.length() > 10) ? this->_firstName.substr(0, 9) + "." : this->_firstName);
	std::cout << "|" << std::setw(10) << ((this->_lastName.length() > 10) ? this->_lastName.substr(0, 9) + "." : this->_lastName);
	std::cout << "|" << std::setw(10) << ((this->_nickName.length() > 10) ? this->_nickName.substr(0, 9) + "." : this->_nickName);
	std::cout << std::endl;

	return ;
}