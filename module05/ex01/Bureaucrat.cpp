#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("ChillBureaucrat"), _grade(69)
{
	std::cout << "Bureaucrat's default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string &name, const int grade) : _name(name)
{
	std::cout << "Bureaucrat's constructor with parameters called" << std::endl;
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &rhs) : _name(rhs._name), _grade(rhs._grade)
{
	std::cout << "Bureaucrat's copy constructor called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &rhs)
{
	std::cout << "Bureaucrat's copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->_grade = rhs.getGrade();
	return *this;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat's destructor called" << std::endl;
}

const std::string Bureaucrat::getName() const
{
	std::cout << "Bureaucrat's getGrade called" << std::endl;
	return this->_name;
}

int Bureaucrat::getGrade() const
{
	std::cout << "Bureaucrat's getGrade called" << std::endl;
	return this->_grade;
}

void Bureaucrat::incrementGrade()
{
	std::cout << "Bureaucrat incrementGrade was called" << std::endl;
	if (--_grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decrementGrade()
{
	std::cout << "Bureaucrat decrementGrade was called" << std::endl;
	if (++_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is too high");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is too low");
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &point)
{
	os << point.getName() << ", bureaucrat grade " << point.getGrade();
	return os;
}

void Bureaucrat::signForm(Form &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << this->getName() << " signed " << form.getName() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << this->getName() << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
	}
}