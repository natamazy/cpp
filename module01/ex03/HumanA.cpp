#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _weapon(weapon) {
	// std::cout << "Constructor called" << std::endl;
	this->_name = name;
	return ;
}

HumanA::~HumanA() {
	// std::cout << "Destructor called" << std::endl;
	return ;
}

void HumanA::attack(void) {
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
	return ;
}

void HumanA::setWeapon(Weapon &newWeapon) {
	this->_weapon = newWeapon;
	return ;
}