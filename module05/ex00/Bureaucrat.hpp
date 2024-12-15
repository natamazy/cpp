#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>

class Bureaucrat
{
public:
	Bureaucrat();
	Bureaucrat(const std::string &name, const int grade);
	Bureaucrat(const Bureaucrat &rhs);
	Bureaucrat &operator=(const Bureaucrat &rhs);
	virtual ~Bureaucrat();

	const std::string getName() const;
	int getGrade() const;

	void incrementGrade();
	void decrementGrade();

	class GradeTooHighException : public std::exception
	{
		const char *what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
		const char *what() const throw();
	};

private:
	const std::string _name;
	int _grade;
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat &point);

#endif