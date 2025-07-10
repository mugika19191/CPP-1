#include "Zombie.hpp"

Zombie::Zombie( void )
{
	std::cout << "unamed zombie created" << std::endl;
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

void Zombie::setName( std::string zName)
{
	this->name = zName;
}

void Zombie::announce( void )
{
	std::cout << this->name <<  ": BraiiiiiiinnnzzzZ..." << std::endl;
}
