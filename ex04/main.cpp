#include <iostream>
#include <fstream>

int replace_str(char **args, std::string str)
{
	std::ofstream outfile;
	std::string name = args[1];
	std::string find = args[2];
	std::string replace = args[3];

	outfile.open((name + ".replace").c_str());
	if (outfile.fail())
	{
		std::cout << "failed creating .replace file" << std::endl;
		return ( 1 );
	}

	int pos;
	int start = 0;

	while ((pos = str.find(find, start)) != (int)std::string::npos)
	{
		outfile << str.substr(start, pos - start);
		outfile << replace;
		start = pos + find.length();
	}

	outfile << str.substr(start);
	outfile.close();

	return 0;
}


int main(int count, char **args)
{
	std::ifstream infile;
	std::string filler;
	char a;
	if ( count !=4 )
	{
		std::cout << "3 args pls: 1:'file name' 2:'string to find' 3:'string to put'" << std::endl;
		return ( 1 );
	}
	infile.open(args[1]);
	if (infile.fail())
	{
		std::cout << "Error opening file." << std::endl;
		return ( 1 );
	}
	while (!infile.eof() && infile >> std::noskipws >> a)
		filler  += a;
	infile.close();
	return (replace_str(args, filler));
}