#include <iostream>
class Zombie
{
	private:
		std::string name;
	public:
		~Zombie( void );
		Zombie( void );
		Zombie( std::string zName );
		void announce( void );
};