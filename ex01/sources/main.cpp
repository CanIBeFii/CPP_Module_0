#include "PhoneBook.hpp"

int main( void )
{
	PhoneBook 	phonebook;
	std::string	input;

	while ( 1 ) {
		std::cout << "Input one of the following commands: ADD, SEARCH, EXIT" << std::endl;
		getline( std::cin, input );
		if ( std::cin.eof() == true ) {
			std::cout << std::endl;
			return ( 1 );
		}
		if ( input.compare( "EXIT" ) == 0 )
			break;
		else if ( input.compare( "ADD" ) == 0 ) {
			phonebook.addContact();
		} else if ( input.compare( "SEARCH" ) == 0 ) {
			phonebook.searchContact();
		}
		input.clear();
	}
	return ( 0 );
}