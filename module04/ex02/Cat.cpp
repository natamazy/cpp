#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat's default constructor called" << std::endl;
}

Cat::Cat(const Cat &rhs)
{
	std::cout << "Cat's copy constructor called" << std::endl;
	*this = rhs;
}

Cat &Cat::operator=(const Cat &rhs)
{
	std::cout << "Cat's copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->type = rhs.getType();
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "meow-meow" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat's destructor called" << std::endl;
}