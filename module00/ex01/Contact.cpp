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