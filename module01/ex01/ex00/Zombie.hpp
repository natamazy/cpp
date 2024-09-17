#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>

class Zombie {
	public:
		Zombie(void);
		Zombie(std::string name);
		~Zombie(void);

		std::string		getName(void);
		void			setName(std::string name);
		void			announce(void);

	private:
		std::string		_name;
};

#endif