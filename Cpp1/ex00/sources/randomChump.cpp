#include "Zombie.hpp"

void	randomChump( std::string name ) {
	Zombie randomLarry;

	randomLarry = Zombie( name );
	randomLarry.announce();
}