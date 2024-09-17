#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class	Weapon {
	public:
		Weapon(void);
		~Weapon(void);

		const	std::string&	getType();
		void					setType(std::string newType);

	private:
		std::string			type;
};

#endif