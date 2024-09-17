#ifndef HUMANA_H
# define HUMANA_H

# include <iostream>
# include "Weapon.hpp"

class HumanA {
	public:
		HumanA(void);
		HumanA(std::string name, Weapon weapon);
		~HumanA(void);

		void		attack(void);
		void		setWeapon(Weapon newWeapon);

	private:
		Weapon		_weapon;
		std::string	_name;
};

#endif