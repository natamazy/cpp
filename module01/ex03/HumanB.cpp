#include "HumanB.hpp"

HumanB::HumanB(std::string name) {
	// std::cout << "Constructor called" << std::endl;
	this->_name = name;
	return ;
}

HumanB::HumanB(std::string name, Weapon weapon) {
	// std::cout << "Constructor called" << std::endl;
	this->_name = name;
	this->_weapon = weapon;
	return ;
}

HumanB::~HumanB() {
	// std::cout << "Destructor called" << std::endl;
	return ;
}

void HumanB::attack(void) {
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
	return ;
}

void HumanB::setWeapon(Weapon newWeapon) {
	this->_weapon = newWeapon;
	return ;
}
