#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat's default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &rhs)
{
	std::cout << "WrongCat's copy constructor called" << std::endl;
	*this = rhs;
}

WrongCat &WrongCat::operator=(const WrongCat &rhs)
{
	std::cout << "WrongCat's copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->type = rhs.getType();
	return *this;
}

void WrongCat::makeSound() const
{
	std::cout << this->getType() << "'s WrongCat makeSound" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat's destructor called" << std::endl;
}