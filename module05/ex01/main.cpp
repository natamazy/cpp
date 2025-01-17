#include "Bureaucrat.hpp"

int main(void)
{

	{
		Bureaucrat NotAChillGuy("NotAChillGuy", 149);
		Form form("form", 25, 75);

		try
		{
			NotAChillGuy.signForm(form);
			std::cout << form << std::endl;
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << '\n';
		}
	}

	{
		try
		{
			Form form1("form1", 0, 75);
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << '\n';
		}

		try
		{
			Form form2("form2", 0, 199);
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << '\n';
		}

		try
		{
			Form form3("form3", 75, 75);
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << '\n';
		}
	}
}