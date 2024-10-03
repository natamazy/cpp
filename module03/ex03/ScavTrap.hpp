#ifndef SVAPTRAP_HPP
# define SVAPTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>

class ScavTrap : public virtual ClapTrap {
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap& rhs);
		~ScavTrap();

		ScavTrap&	operator=(const ScavTrap& rhs);

		void		attack(const std::string& target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);

		void		guardGate();
};

#endif
