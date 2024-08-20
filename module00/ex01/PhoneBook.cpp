/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natamazy <natamazy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 12:18:12 by natamazy          #+#    #+#             */
/*   Updated: 2024/08/20 14:50:10 by natamazy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) {
	std::cout << "Constructor" << std::endl;
	return;
}

PhoneBook::~PhoneBook(void) {
	std::cout << "Destructor" << std::endl;
	return;
}

void	PhoneBook::add(void) {
	std::string fn;
	std::string ln;
	std::string nn;
	std::string pn;
	std::string ds;

	std::cout << "Enter first name of contact: ";
	std::cin >> fn;
	std::cout << "Enter last name of contact: ";
	std::cin >> ln;
	std::cout << "Enter nickname of contact: ";
	std::cin >> nn;
	std::cout << "Enter phone number of contact: ";
	std::cin >> pn;
	std::cout << "Enter darkest secret of contact: ";
	std::cin >> ds;
	std::cout << std::endl;
	

	if (fn == "" || ln == "" || nn == "" || pn == "" || ds == "") {
		std::cout << "None of fields cam be empty!." << std::endl;
	} else {
		if (_index >= 8) {
			this->_index -= 8;
		}
		
		this->_contacts[this->_index] = Contact(fn, ln, nn, pn, ds);
		this->_index++;
	}

}