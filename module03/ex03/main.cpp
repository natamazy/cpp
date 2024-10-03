#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main() {
	ClapTrap x = ClapTrap("Bamboleylo");

	std::cout << "--------------------------------------------------------" << std::endl;

	FragTrap y = FragTrap();

	std::cout << "--------------------------------------------------------" << std::endl;

	FragTrap copy(y);

	std::cout << "--------------------------------------------------------" << std::endl;

	FragTrap withName("Name");

	std::cout << "--------------------------------------------------------" << std::endl;
	
	withName.attack("AraVayQuAra");
	
	std::cout << "--------------------------------------------------------" << std::endl;
	
	withName.highFiveGuys();
	
	std::cout << "--------------------------------------------------------" << std::endl;

	x.attack("ChyBamboleylo");
	
	std::cout << "--------------------------------------------------------" << std::endl;

	x.takeDamage(100);

	std::cout << "--------------------------------------------------------" << std::endl;

	x.beRepaired(10);

	std::cout << "--------------------------------------------------------" << std::endl;
}
