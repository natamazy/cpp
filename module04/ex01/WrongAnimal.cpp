#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("")
{
	std::cout << "WrongAnimal's default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string &type)
{
	std::cout << "WrongAnimal's constructor with parameters called" << std::endl;
	this->type = type;
}

WrongAnimal::WrongAnimal(const WrongAnimal &rhs)
{
	std::cout << "WrongAnimal's copy constructor called" << std::endl;
	*this = rhs;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &rhs)
{
	std::cout << "WrongAnimal's copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->type = rhs.getType();
	return *this;
}

void WrongAnimal::makeSound() const
{
	std::cout << this->getType() << "'s WrongAnimal makeSound" << std::endl;
}

std::string WrongAnimal::getType() const
{
	std::cout << "WrongAnimal's getType was called" << std::endl;
	return (this->type);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal's destructor called" << std::endl;
}