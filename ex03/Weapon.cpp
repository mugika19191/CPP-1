#include "Weapon.hpp"

Weapon::~Weapon()
{
}
Weapon::Weapon(std::string type)
{
	this->type = type;
}
Weapon::Weapon()
{
}
void 	Weapon::setType( std::string btype )
{
	this->type = btype;
}
const std::string&	Weapon::getType(void)
{
	return this->type;
}