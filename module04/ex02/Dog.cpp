#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog's default constructor called" << std::endl;
}

Dog::Dog(const Dog &rhs)
{
	std::cout << "Dog's copy constructor called" << std::endl;
	*this = rhs;
}

Dog &Dog::operator=(const Dog &rhs)
{
	std::cout << "Dog's copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->type = rhs.getType();
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "woah-woah" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog's destructor called" << std::endl;
}