#include "Zombie.hpp"

Zombie* newZombie( std::string name );

void randomChump( std::string name );

int main ( void )
{
	Zombie *good = new Zombie("paco");
	good->announce();
	randomChump("impostor");
	delete good;
	return 0;
}