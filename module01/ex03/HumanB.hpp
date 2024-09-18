#ifndef HUMANB_H
# define HUMANB_H

# include <iostream>
# include "Weapon.hpp"

class HumanB {
	public:
		HumanB(std::string name);
		HumanB(std::string name, Weapon &weapon);
		~HumanB(void);

		void		attack(void);
		void		setWeapon(Weapon &newWeapon);

	private:
		Weapon	*	_weapon;
		std::string	_name;
};

#endif