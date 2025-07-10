#include "HumanA.hpp"

HumanA::HumanA(std::string aName, Weapon &aWeapon): name(aName), weapon(aWeapon)
{
	std::cout << aName <<" HAS BEEN BORN!" << std::endl;
}
HumanA::~HumanA( void )
{
	std::cout << this->name <<" HAS BEEN KILLED!" << std::endl;
}

void HumanA::attack( void )
{
	std::cout << this->name <<" attacks with their "<< this->weapon.getType() << std::endl;
}
