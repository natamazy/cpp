#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <cstdlib>
#include <ctime>

int main(void)
{
	std::srand(std::time(0));
	{
		Intern someRandomIntern;
		AForm *rrf;

		rrf = someRandomIntern.makeForm("presidential pardon", "BOMBONito");
		if (rrf)
			std::cout << *rrf << std::endl;
		delete rrf;
	}

	{
		Intern someRandomIntern;
		AForm *rrf;

		rrf = someRandomIntern.makeForm("robotomy request", "TURBULENTO");
		if (rrf)
			std::cout << *rrf << std::endl;
		delete rrf;
	}

	{
		Intern someRandomIntern;
		AForm *rrf;

		rrf = someRandomIntern.makeForm("shrubbery creation", "LOLA");
		if (rrf)
			std::cout << *rrf << std::endl;
		delete rrf;
	}

	{
		Intern someRandomIntern;
		AForm *rrf;

		rrf = someRandomIntern.makeForm("ROCKNROLL", "ZAVA");
		if (rrf)
			std::cout << *rrf << std::endl;
		delete rrf;
	}
}