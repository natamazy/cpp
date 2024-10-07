#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

DiamondTrap::DiamondTrap() : ScavTrap(666), FragTrap(666) {
	this->_name = "42DiamondTrap";
	ClapTrap::_name += "_clap_name";

	std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ScavTrap(666), FragTrap(666) {
	this->_name = name;
	ClapTrap::_name += "_clap_name";

	std::cout << "DiamondTrap constructor with name called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) : ScavTrap(other), FragTrap(other) {
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	*this = other;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other) {
	std::cout << "Copy assignment operator of DiamondTrap called" << std::endl;
	if (this != &other) {
		this->_name = other._name;
		_hitPoints = other._hitPoints;
		_energyPoints = other._energyPoints;
		_attackDamage = other._attackDamage;
		ClapTrap::_name = other.ClapTrap::_name;
	}
	return *this;
}

void	DiamondTrap::whoAmI() {
	std::cout << _name << ClapTrap::_name <<std::endl;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap destructor called" << std::endl;
}

void	DiamondTrap::printAll() {
	std::cout << this->_energyPoints << this->_hitPoints << this->_attackDamage << std::endl;
}