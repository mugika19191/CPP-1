#include "HumanB.hpp"

HumanB::HumanB( std::string bName )
{
	std::cout << bName <<" HAS BEEN BORN!" << std::endl;
	this->name = bName;
}
HumanB::~HumanB( void )
{
	std::cout << this->name <<" HAS BEEN KILLED!" << std::endl;
}

void HumanB::attack( void )
{
	std::cout << this->name <<" attacks with their "<< this->weapon->getType() << std::endl;
}
void HumanB::setWeapon(Weapon &bWeapon)
{
	this->weapon = &bWeapon;
}