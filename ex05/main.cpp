#include "Harl.hpp"
int main(int count, char** args)
{
	Harl harl;
	if (count != 2)
	{
		std::cout << "need an input." << std::endl;
		return 1;
	}	
	harl.complain(args[1]);
	return (0);
}