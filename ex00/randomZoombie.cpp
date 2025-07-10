#include "Zombie.hpp"

void randomChump( std::string name )
{
	Zombie fake = Zombie(name);
	fake.announce();
}