#include "Animal.hpp"

Animal::Animal()
{
	this->type = "";
	std::cout << "Animal's default constructor called" << std::endl;
}

Animal::Animal(const std::string &type)
{
	std::cout << "Animal's constructor with parameters called" << std::endl;
	this->type = type;
}

Animal::Animal(const Animal &rhs)
{
	std::cout << "Animal's copy constructor called" << std::endl;
	*this = rhs;
}

Animal &Animal::operator=(const Animal &rhs)
{
	std::cout << "Animal's copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->type = rhs.getType();
	return *this;
}

void Animal::makeSound() const
{
	std::cout << this->getType() << "'s makeSound was called" << std::endl;
}

std::string Animal::getType() const
{
	std::cout << "Animal's getType was called" << std::endl;
	return (this->type);
}

Animal::~Animal()
{
	std::cout << "Animal's destructor called" << std::endl;
}