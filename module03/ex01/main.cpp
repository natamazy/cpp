#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
	ClapTrap x = ClapTrap("Bamboleylo");

	std::cout << "--------------------------------------------------------" << std::endl;

	ScavTrap y = ScavTrap();

	std::cout << "--------------------------------------------------------" << std::endl;

	ScavTrap copy(y);

	std::cout << "--------------------------------------------------------" << std::endl;

	ScavTrap withName("Name");

	std::cout << "--------------------------------------------------------" << std::endl;
	
	withName.attack("AraVayQuAra");
	
	std::cout << "--------------------------------------------------------" << std::endl;

	x.attack("ChyBamboleylo");
	
	std::cout << "--------------------------------------------------------" << std::endl;

	x.takeDamage(100);

	std::cout << "--------------------------------------------------------" << std::endl;

	x.beRepaired(10);

	std::cout << "--------------------------------------------------------" << std::endl;
}
