#include "Zombie.hpp"

Zombie	*zombieHorde( int N, std::string name ) {
	Zombie	*horde;

	horde = new Zombie[N];

	for (int index = 0; index < N; index += 1) {
		horde[index].setName( name );
	}
	return ( horde );
}