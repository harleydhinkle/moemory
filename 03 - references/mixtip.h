#pragma once
#include <string>


struct Track
{
	std::string trackName; 
	float playtime;        
};

struct Playlist
{
	std::string playlistName; 
	Track * trackList;        
	int trackCount;           
};

void printPlaylist(const Playlist& pl);
void shufflePlaylist(Playlist& pl);
void dedupePlaylist(Playlist& pl);


