#include "Contact.hpp"
#include <iostream>

Contact::Contact(void) {
	std::cout << "Contact constructor called" << std::endl;

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
	std::cout << "Contact destructor called" << std::endl;

	return ;
}

void Contact::print(int i) {
	std::cout << std::setw(10) << i;
	std::cout << "|" << std::setw(10) << ((this->_firstName.length() > 10) ? this->_firstName.substr(0, 9) + "." : this->_firstName);
	std::cout << "|" << std::setw(10) << ((this->_lastName.length() > 10) ? this->_lastName.substr(0, 9) + "." : this->_lastName);
	std::cout << "|" << std::setw(10) << ((this->_nickName.length() > 10) ? this->_nickName.substr(0, 9) + "." : this->_nickName);
	std::cout << std::endl;

	return ;
}