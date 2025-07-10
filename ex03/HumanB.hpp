#include "Weapon.hpp"
class HumanB
{
	private:
		Weapon *weapon;
		std::string name;
	public:
		HumanB( std::string bName );
		~HumanB( void );
		void attack( void );
		void setWeapon(Weapon &bWeapon);
};