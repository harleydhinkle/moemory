#include <fstream>
#include <iostream>
#include <string>
#include "entity.h"
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

	fstream autocreate;
	autocreate.open("hi.txt", std::ios::out );
	if (autocreate.fail()) 
	{
		std::cerr << "somethink went wrong" << std::endl;
		return -1;
	}
	autocreate.close();
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
	string game;
	std::cout << "where would you like to save this?" << std::endl;
	std::cin >> game;
	fstream profileData;
	profileData.open(game.c_str(), std::ios_base::out);
	if (profileData.fail()) 
	{
		std::cerr << "file not found. :(" << std::endl;
		return -1;
	}
	std::cout << "who are you?" << std::endl;
	getline(std::cin, game);
	profileData << game << std::endl;
	std::cout << "how old are you?" << std::endl;
	getline(std::cin, game);
	profileData << game << std::endl;
	std::cout << "whats your favorite cother?" << std::endl;
	getline(std::cin, game);
	profileData << game << std::endl;
	file.clear();
	file.seekp(0, std::ios_base::end);
	file.close();
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
	fstream play;
	play.open("badguy.txt");
	if (play.fill()) 
	{
		std::cerr << "cant open file" << std::endl;
	}
	int entiycout = 0;
	Entity entities[100];
	while (true) 
	{
		string buf;
		bool entiyFound = false;
		while (getline(play, buf)) 
		{
			if (buf[0] == '@') 
			{ 
				entiyFound = true;
				break; 
			}
		}
		if (!entiyFound) { break; }
		Entity& curEntity = entities[entiycout];
		getline(play, buf);
		curEntity.hitpoints == stof(buf);
		getline(play, buf);
		curEntity.armor == stof(buf);
		getline(play, buf);
		curEntity.strength == stof(buf);
		getline(play, buf);
		curEntity.defense== stof(buf);
		getline(play, buf);
		curEntity.agility == stof(buf);
		getline(play, buf);
		curEntity.luck == stof(buf);
		entiycout++;
		if (entiycout >= 100) { break; }
	}
	while (true){}
}