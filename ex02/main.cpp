#include <iostream>
int main ( void )
{	
	std::string mystr = "HI THIS IS BRAIN";
	std::string *stringPTR = &mystr;
	std::string &stringREF = mystr; // another name foor thee mystr var.
									// it doesnt take memory 
									// its like having to labels for the same box

	std::cout << "The memory address of the string variable. " << &mystr <<std::endl;
	std::cout << "The memory address held by stringPTR. " << stringPTR <<std::endl;
	std::cout << "The memory address held by stringREF. " << &stringREF <<std::endl;

	std::cout << "The value of the string variable. " << mystr <<std::endl;
	std::cout << "The value pointed to by stringPTR. " << *stringPTR <<std::endl;
	std::cout << "The value pointed to by stringREF. " << stringREF <<std::endl;
	return 0;
}