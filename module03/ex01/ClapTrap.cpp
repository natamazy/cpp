#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	this->_name = "";
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;

	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) {
	this->_name = name;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;

	std::cout << "ClapTrap constructor with name called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& rhs) {
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;

	std::cout << "ClapTrap copy constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& rhs) {
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;

	return *this;
}

void	ClapTrap::attack(const std::string& target) {
	if (this->_hitPoints == 0) {
		std::cout << "0 hit points, attack failed" << std::endl;
		return ;
	}

	if (this->_energyPoints == 0) {
		std::cout << "0 energy points, attack failed" << std::endl;
		return ;
	}

	this->_energyPoints--;

	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (this->_hitPoints == 0) {
		std::cout << "0 hit points, repairing failed" << std::endl;
		return ;
	}

	if (this->_energyPoints == 0) {
		std::cout << "0 energy points, repairing failed" << std::endl;
		return ;
	}

	this->_energyPoints -= amount;

	std::cout << this->_name <<  " repaired" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (this->_hitPoints == 0) {
		std::cout << "0 hit points, taking damage failed" << std::endl;
		return ;
	}

	if (amount >= this->_hitPoints) {
		this->_hitPoints = 0;
	} else {
		this->_hitPoints -= amount;
	}

	std::cout << this->_name << " taked " << amount << " damage." << std::endl;
}
