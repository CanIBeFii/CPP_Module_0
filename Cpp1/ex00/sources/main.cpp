#include "Zombie.hpp"

int main( void ) {
	std::cout << "Creating a Zombie with the name mike" << std::endl;

	Zombie mike = Zombie( "mike" );

	std::cout << "\nZombie now will announce itself!" << std::endl;

	mike.announce();

	std::cout << "\nDinamically allocating a Zombie!" << std::endl;

}