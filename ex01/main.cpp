#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

int main ( void )
{
	int n = 10;
	if (n < 0)
		return 1;
	Zombie *horde = zombieHorde(n,"Patxi");
	while (--n >= 0)
	{
		horde[n].announce();
	}
	//how to delete horde array and siat
	delete []horde;
	return 0;
}