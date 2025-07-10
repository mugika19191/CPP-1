#include "Weapon.hpp"
class HumanA
{
	private:
		std::string name;
		Weapon &weapon;
	public:
		HumanA( std::string aName, Weapon &aWeapon );
		~HumanA( void );
		void attack( void );
};