#include "Zombie.hpp"

Zombie::Zombie( void )
{
}
Zombie::Zombie( std::string zName )
{
	std::cout << zName << " named zombie created" << std::endl;
	this->name = zName;
}

Zombie::~Zombie( void )
{
	std::cout << this->name << " named zombie destroyed" << std::endl;
}

void Zombie::announce( void )
{
	std::cout << this->name <<  ": BraiiiiiiinnnzzzZ..." << std::endl;
}
