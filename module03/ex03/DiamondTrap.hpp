#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"
# include <iostream>

class DiamondTrap : public ScavTrap, public FragTrap {
	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap& rhs);
		~DiamondTrap();

		void printAll();

		DiamondTrap&	operator=(const DiamondTrap& rhs);

		using	ScavTrap::attack;
		void	whoAmI();

	private:
		std::string		_name;
};

#endif