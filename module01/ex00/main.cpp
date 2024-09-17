#include "Zombie.hpp"

Zombie*		newZombie(std::string name) {
	return (new Zombie(name));
}

void		randomChump(std::string name) {
	Zombie(name).announce();
	return ;
}

int 		main() {
	Zombie* heapZombie = newZombie("HEAP");
	heapZombie->announce();
	
	randomChump("STACK");

	delete heapZombie;
}