#include "mixtip.h"
#include <string>
#include <iostream>
#include <random>

void printPlaylist(const Playlist & pl)
{
	std::cout << pl.playlistName <<std::endl;
	for (int i = 0; i < pl.trackCount; i++) 
	{
		std::cout << pl.trackList[i].trackName << std::endl;
		std::cout << (int)pl.trackList[i].playtime << ":"<<  << std::endl;
	}
}

void shufflePlaylist(Playlist & pl)
{
	srand(Time(NULL));
}

void dedupePlaylist(Playlist & pl)
{
	for (int i = 0; pl.trackCount; i++) 
	{

	}
}
