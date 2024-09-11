#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>
# include <iomanip>

class Contact {
	public:
		Contact(void);
		Contact(std::string firstName, std::string lastName, std::string nickName, std::string phoneNumber, std::string darkestSecret);
		~Contact(void);

		void	print(int i);
	
	private:
		std::string _firstName;
		std::string _lastName;
		std::string _nickName;
		std::string _phoneNumber;
		std::string _darkestSecret;
};

#endif