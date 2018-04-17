#pragma once
#include "Anime.h"

class AnimeList			//Declares AnimeList class
{
private: 
	Anime rList[100];				//Creates an array of size 100 for the list
	int listSize;

public:
	AnimeList();
	int addAnime();
	bool detectDuplicate(Anime duplicate);
	int getListSize();
	void displayList();
};