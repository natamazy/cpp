#include "Bureaucrat.hpp"

int	main(void) {

	{
		Bureaucrat ChillGuy;
		Bureaucrat NotAChillGuy("NotAChillGuy", 149);

		try
		{
			ChillGuy.incrementGrade();
			ChillGuy.incrementGrade();
			ChillGuy.incrementGrade();
			ChillGuy.incrementGrade();
			std::cout << ChillGuy.getGrade() << std::endl;
			std::cout << ChillGuy.getName() << std::endl;
		}
		catch(std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}

		try
		{
			NotAChillGuy.decrementGrade();
			std::cout << NotAChillGuy.getGrade() << std::endl;
			NotAChillGuy.decrementGrade();
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}

	{
		try {
			Bureaucrat RajaRamanna("RajaRamanna", 0);
		}
		catch(const std::exception& e) {
			std::cerr << e.what() << '\n';
		}

		try {
			Bureaucrat SamPitroda("SamPitroda", 199);
		}
		catch(const std::exception& e) {
			std::cerr << e.what() << '\n';
		}
		try {
			Bureaucrat ManMohanSingh("ManMohanSingh", 1);
			ManMohanSingh.getName();
			ManMohanSingh.incrementGrade();
		}
		catch(const std::exception& e) {
			std::cerr << e.what() << '\n';
		}
	}

}