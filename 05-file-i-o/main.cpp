#include <fstream>
#include <iostream>
#include <string>
using std::string;
using std::fstream;
int  main() 
{	
	
	fstream file;
	file.open("text.txt");
	if (file.fail()) 
	{
		std::cerr << "file not found. :(" << std::endl;
		return -1;
	}

	string buffer;
	while (std::getline(file,buffer))
	{
		std::cout << buffer << std::endl;
	}
	file.clear();
	file.seekp(0,std::ios_base::end);
	file << std::endl << "Todays always the present! :)";
	file.flush();
	file.close();

	//fstream autocreate;
	//autocreate.open("hi.txt", std::ios::out );
	//if (autocreate.fail()) 
	//{
	//	std::cerr << "somethink went wrong" << std::endl;
	//	return -1;
	//}
	//autocreate.close();
	//closed 
	//1.
	string open;
	std::cin >> open;
	file.open(open);
	if (file.fail())
	{
		std::cerr << "file not found. :(" << std::endl;
		return -1;
	}

	while (std::getline(file,open))
	{
		std::cout << open << std::endl;
	}
	file.clear();
	file.seekp(0, std::ios_base::end);
	file.close();
	//2.
	//open
	//1.
	//2.
	file.open("commaSep.txt");
	if (file.fail())
	{
		std::cerr << "file not found. :(" << std::endl;
		return -1;
	}
	string array[4];
	while (std::getline(file, array[4]))
	{
		std::cout << array[4] << std::endl;
	}
	file.clear();
	
	//3.

	while (true){}
}