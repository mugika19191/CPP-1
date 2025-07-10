#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

int main ( void )
{
	int n = 10;
	Zombie *horde = zombieHorde(n,"Patxi");
	//delete horde;
	while (--n >= 0)
	{
		horde[n].announce();
	}
	delete []horde;
	return 0;
}