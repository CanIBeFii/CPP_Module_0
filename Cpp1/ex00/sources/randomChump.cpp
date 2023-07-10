#include "Zombie.hpp"

void	randomChump( std::string name ) {
	Zombie randomLarry = Zombie( name );
	randomLarry.announce();
}