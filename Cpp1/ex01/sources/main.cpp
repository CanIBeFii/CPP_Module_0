#include "Zombie.hpp"

int	main( void ) {
	Zombie	*horde;

	std::cout << "Going to attract a zombie horde of 5" << std::endl;
	horde = zombieHorde( 5, "RandomLarry" );

	std::cout << "\nAll the RandomLarries will announce themself" << std::endl;
	for (int index = 0; index < 5; index += 1) {
		horde[index].announce();
	}

	std::cout << "\nKilling them of :)" << std::endl;
	delete [] horde;
}