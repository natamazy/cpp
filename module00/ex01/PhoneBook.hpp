#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iostream>
# include <iomanip>
# include "Contact.hpp"

# define NOVALID -1
# define ONLYLETTERS 1
# define ONLYNUMBERS 2

class PhoneBook {
	public:
		// Constructor
		PhoneBook(void);
		// Deconstructor
		~PhoneBook(void);

		// Methods declarations
		void		add(void);
		void		search(void);
	
	private:
		// Private methods declarations
		void			_printField(std::string fieldName);
		std::string		_getField(std::string fieldName, int validation);
		int				_isCorrectInput(std::string input);

		// Private variables of class
		Contact		_contacts[8];
		int			_contactCount;
		bool		_isFull;
};

#endif