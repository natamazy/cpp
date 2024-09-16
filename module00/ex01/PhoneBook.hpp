#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "Contact.hpp"

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
		std::string		_getField(std::string fieldName);
		int				_isCorrectInput(std::string input);

		// Private variables of class
		Contact		_contacts[8];
		int			_contactCount;
		bool		_isFull;
};

#endif