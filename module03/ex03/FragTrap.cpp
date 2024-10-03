#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
	this->_name = "";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;

	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;

	std::cout << "FragTrap constructor with name called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& rhs) : ClapTrap(rhs) {
	std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& rhs) {
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;

	return *this;
}

void	FragTrap::attack(const std::string& target) {
	if (this->_hitPoints == 0) {
		std::cout << "0 hit points, attack failed" << std::endl;
		return ;
	}

	if (this->_energyPoints == 0) {
		std::cout << "0 energy points, attack failed" << std::endl;
		return ;
	}

	this->_energyPoints--;

	std::cout << "FragTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
}

void	FragTrap::highFiveGuys() {
	std::cout << "FragTrap displaying positive high fives" << std::endl;
}
