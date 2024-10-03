#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>

class FragTrap : public virtual ClapTrap {
	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap& rhs);
		~FragTrap();

		FragTrap&	operator=(const FragTrap& rhs);

		void		attack(const std::string& target);
		void		highFiveGuys(void);
};

#endif
