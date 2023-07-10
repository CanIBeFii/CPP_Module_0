#include "Zombie.hpp"

Zombie::Zombie( void ) : _name("") {
	std::cout << "Zombie constructor called!!" << std::endl;
}

Zombie::Zombie( std::string name ) : _name( name ) {
	std::cout << "Zombie called " << _name << " created!" <<std::endl;
}

Zombie::~Zombie( void ) {
	std::cout << "Zombie " << _name << " just died!" << std::endl; 
}

void	Zombie::announce( void ) {
	std::cout <<  _name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}