#include "ClapTrap.hpp"

int main() {
	ClapTrap x = ClapTrap("Bamboleylo");

	x.attack("ChyBamboleylo");
	x.takeDamage(100);
	x.beRepaired(10);
}
