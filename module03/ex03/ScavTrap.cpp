#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
	this->_name = "";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;

	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;

	std::cout << "ScavTrap constructor with name called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& rhs) : ClapTrap(rhs) {
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& rhs) {
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;

	return *this;
}

void	ScavTrap::attack(const std::string& target) {
	if (this->_hitPoints == 0) {
		std::cout << "0 hit points, attack failed" << std::endl;
		return ;
	}

	if (this->_energyPoints == 0) {
		std::cout << "0 energy points, attack failed" << std::endl;
		return ;
	}

	this->_energyPoints--;

	std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
}

void	guardGate() {
	std::cout << "Guard Gate mode enabled" << std::endl;
}

ScavTrap::ScavTrap(int) {
	_energyPoints = 50;
}
