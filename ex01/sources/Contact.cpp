#include "Contact.hpp"
#include <iomanip>

Contact::Contact() {
	std::cout << "Contact constructor called" << std::endl;
}

Contact::~Contact() {
	std::cout << "Contact destructor called" << std::endl;
}

std::string Contact::trimField( std::string field ) {
	if ( field.length() > 10 ) {
		field.substr( 0, 9 );
		field.append( "." );
	}
	return ( field );
}

void	Contact::getContactInfo( int index ) {
	std::string	field;

	std::cout << "|         " << index << "|";
	field = trimField(getFirstName());

	std::cout << std::setw( 10 ) << std::right << field << "|";
	field.clear();
	
	field = trimField(getLastName());
	std::cout << std::setw( 10 ) << std::right << field << "|";
	field.clear();
	
	field = trimField( getNickname() );
	std::cout << std::setw( 10 ) << std::right << field << "|" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
}

void	Contact::setFirstName( std::string firstName ) {
	this->_firstName = firstName;
}

void	Contact::setLastName( std::string lastName ) {
	this->_lastName = lastName;
}

void	Contact::setNickname( std::string nickname ) {
	this->_nickname = nickname;
}

void	Contact::setPhoneNumber( std::string phoneNumber ) {
	this->_phoneNumber = phoneNumber;
}

void	Contact::setDarkestSecret( std::string darkestSecret ) {
	this->_darkestSecret = darkestSecret;
}

std::string	Contact::getFirstName() const {
	return this->_firstName;
}

std::string	Contact::getLastName() const {
	return this->_lastName;
}

std::string	Contact::getNickname() const {
	return this->_nickname;
}

std::string	Contact::getPhoneNumber() const {
	return this->_phoneNumber;
}

std::string	Contact::getDarkestSecret() const {
	return this->_darkestSecret;
}
