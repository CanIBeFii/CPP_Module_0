#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
	std::cout << "PhoneBook constructor called" << std::endl;
	this->_oldestContact = 0;
}

PhoneBook::~PhoneBook() {
	std::cout << "PhoneBook destructor called" << std::endl;
}

std::string PhoneBook::getContactField(std::string field) {
	std::string	input;

	while (input.empty() == true) {
		std::cout << field;
		std::getline(std::cin, input);
		if (input.empty() == true)
			std::cout << "Field must not be empty!!" << std::endl;
	}
	return input;
}

void	PhoneBook::addContact() {
	std::string	input;

	for (int fieldNumber = 0; fieldNumber < 5; fieldNumber++) {
		switch (fieldNumber) {
			case 0:
				input = getContactField("First name: ");
				this->_contacts[this->_oldestContact].setFirstName(input);
				break;
			case 1:
				input = getContactField("Last name: ");
				this->_contacts[this->_oldestContact].setLastName(input);
				break;
			case 2:
				input = getContactField("Nickname: ");
				this->_contacts[this->_oldestContact].setNickname(input);
				break;
			case 3:
				input = getContactField("Phone number: ");
				this->_contacts[this->_oldestContact].setPhoneNumber(input);
				break;
			case 4:
				input = getContactField("Darkest secret: ");
				this->_contacts[this->_oldestContact].setDarkestSecret(input);
				break;
		}
		input.clear();
	}
	if (_oldestContact == 7)
		_oldestContact = 0;
	else
		_oldestContact++;
}

void	PhoneBook::searchContact() {
	std::string	input;
	int			index;

	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	for (index = 0; index < 8; index++) {
		this->_contacts[index].getContactInfo(index);
	}

	std::cout << std::endl << "Input Index: ";
	getline(std::cin, input);

	if (input.empty() || input.length() > 1 || isdigit(input[0]) == 0){
		std::cout << "Input not valid!" << std::endl;
		return ;
	}
	index = std::stoi(input);
	if (index < 0 || index > 7) {
		std::cout << "Invalid index!!" << std::endl; 
		return ;
	}
	std::cout << "First name: " << this->_contacts[index].getFirstName() << std::endl;
	std::cout << "Last name: " << this->_contacts[index].getLastName() << std::endl;
	std::cout << "Nickname: " << this->_contacts[index].getNickname() << std::endl;
	std::cout << "Phone number: " << this->_contacts[index].getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret: " << this->_contacts[index].getDarkestSecret() << std::endl;
}