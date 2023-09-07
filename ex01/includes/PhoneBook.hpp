#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iostream>
# include <cstdlib>

class PhoneBook {
private:
	Contact _contacts[8];
	int		_oldestContact;

public:
	PhoneBook();
	~PhoneBook();

	void		addContact();
	void		searchContact();
	std::string	getContactField( std::string field );
};

#endif
