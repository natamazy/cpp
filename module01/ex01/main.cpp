#include "Zombie.hpp"

Zombie*		zombieHorde(int N, std::string name) {
	Zombie* zombieHorde = new Zombie[N];

	for (int i = 0; i < N; i++) {
		zombieHorde[i].setName(name);
	}

	return zombieHorde;
}

int 		main() {
	Zombie	*horde;
	int		zombieAmount = 10;

	horde = zombieHorde(zombieAmount, "Horde Member");
	if (horde == NULL)
		return (EXIT_FAILURE);
	for (int i = 0; i < zombieAmount; ++i)
		horde[i].announce();
	delete[] horde;
	horde = zombieHorde(0, "Failed");
	return (EXIT_SUCCESS);
}