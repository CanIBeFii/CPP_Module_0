#include "Zombie.hpp"

int main( void ) {
	std::cout << "Creating a Zombie with the name mike" << std::endl;

	Zombie mike = Zombie( "mike" );

	std::cout << "\nZombie now will announce itself!" << std::endl;

	mike.announce();

	std::cout << "\nDinamically allocating a Zombie!" << std::endl;

	Zombie *alfred;

	alfred = newZombie( "Alfred" );

	alfred->announce();

	std::cout << "\nFreeing the memory for the dinamically allocated Zombie!!" << std::endl;

	delete alfred;

	std::cout << "\nSummoning a random Chump" << std::endl;

	randomChump( "I'm random" );

	return ( 0 );
}