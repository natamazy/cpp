#include "Zombie.hpp"

Zombie::Zombie(std::string name) {
	this->_name = name;

	std::cout << "Constructor called" << std::endl;

	return ;
}

Zombie::~Zombie(void) {
	std::cout << "Destructor called for Zombie with name: " << this->_name << std::endl;
	
	return ;
}

std::string		Zombie::getName(void) {
	return (this->_name);
}

void			Zombie::announce(void) {
	std::cout << this->getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}