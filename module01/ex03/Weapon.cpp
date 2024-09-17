#include "Weapon.hpp"

Weapon::Weapon(void) {
	// std::cout << "Constructor called" << std::endl;
	return ;
}

Weapon::Weapon(std::string type) {
	// std::cout << "Constructor called" << std::endl;
	this->_type = type;
	return ;
}

Weapon::~Weapon() {
	// std::cout << "Destructor called" << std::endl;
	return ;
}

const std::string& Weapon::getType(void) const {
	return (this->_type);
}

void Weapon::setType(std::string newType) {
	this->_type = newType;
	return ;
}