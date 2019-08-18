#pragma once

#include <string>
#include "song.h"
#include <vector>
using namespace std;
class Album
{
public:
	Album(string albumNmae, string bandName);
	~Album();
	string getAlbumName() { return title; };
	string getBandName() { return band; };
	void addSong(song song1) { songs.push_back(song1); }
	vector<song>::iterator getSong() { return songs.begin(); }
private:
	string title;
	string band;
	vector<song> songs;
};

Album::Album(string albumNmae, string bandName)
{

}

Album::~Album()
{
}



