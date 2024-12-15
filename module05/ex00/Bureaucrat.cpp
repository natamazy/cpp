#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	this->type = "";
	std::cout << "Bureaucrat's default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string &type)
{
	std::cout << "Bureaucrat's constructor with parameters called" << std::endl;
	this->type = type;
}

Bureaucrat::Bureaucrat(const Bureaucrat &rhs)
{
	std::cout << "Bureaucrat's copy constructor called" << std::endl;
	*this = rhs;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &rhs)
{
	std::cout << "Bureaucrat's copy assignment operator called" << std::endl;
	return *this;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat's destructor called" << std::endl;
}