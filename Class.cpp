#include "Class.hpp"

Class::Class()
{
	this->type = "";
	std::cout << "Class's default constructor called" << std::endl;
}

Class::Class(const std::string &type)
{
	std::cout << "Class's constructor with parameters called" << std::endl;
	this->type = type;
}

Class::Class(const Class &rhs)
{
	std::cout << "Class's copy constructor called" << std::endl;
	*this = rhs;
}

Class &Class::operator=(const Class &rhs)
{
	std::cout << "Class's copy assignment operator called" << std::endl;
	return *this;
}

Class::~Class()
{
	std::cout << "Class's destructor called" << std::endl;
}