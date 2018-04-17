#pragma once
#include "stdafx.h"
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

const int ERROR1 = 5;

class Anime			//Declares Anime class
{
private:
	string animeName;
	string mainCharacter;
	string animeGenre;
	int animeSeasons;
	double animeEpisodes;

public:
	Anime();
	int getAnimeRecommendation();				//Retrieves user input and stores into the list
	string getName();							//Retrieves the name of the anime that the user inputs
	string getMainCharacter();					//Retrieves the main character of the anime that the user inputs

	friend ostream & operator << (ostream &os, const Anime &anime);
};