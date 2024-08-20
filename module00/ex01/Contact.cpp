/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: natamazy <natamazy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 12:18:12 by natamazy          #+#    #+#             */
/*   Updated: 2024/08/20 14:20:59 by natamazy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

Contact::Contact(void) {
	std::cout << "Constructor" << std::endl;
	return;
}

Contact::Contact(std::string fn, std::string ln, std::string nn, std::string pn, std::string ds) {
	this->FirstName = fn;
	this->LastName = ln;
	this->Nickname = nn;
	this->PhoneNumber = pn;
	this->DarkestSecrest = ds;
	return;
}

Contact::~Contact(void) {
	std::cout << "Destructor" << std::endl;
	return;
}