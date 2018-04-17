#include "stdafx.h"
#include "Anime.h"

Anime::Anime()				//Default constructor for Anime class
{
	animeName = "";
	animeGenre = "";
	mainCharacter = "";
	animeSeasons = 0;
	animeEpisodes = 0;
}


string Anime::getName()
{
	return animeName;
}

string Anime::getMainCharacter()
{
	return mainCharacter;
}

int Anime::getAnimeRecommendation()
{
	cin.clear();
	cin.ignore();
	cout << endl;
	cout << "==============================================================================" << endl;
	cout << "What's the name of the anime you wish to recommend?\t";
	getline(cin, animeName);

	cout << "What genre would you describe " << animeName << "?\t\t\t";
	getline(cin, animeGenre);

	cout << "Who is the main character in " << animeName << "?\t\t\t";
	getline(cin, mainCharacter);

	cout << "How many seasons does " << animeName << " have?\t\t\t";
	cin >> animeSeasons;

	cout << "What is the total number of episodes for " << animeName << "?\t";
	cin >> animeEpisodes;
	cout << "==============================================================================" << endl;
	cout << "                                       *                                      " << endl;
	cout << "==============================================================================" << endl;
	cout << "\t^.^ Thank you! We've saved your information for " << animeName << "  ^.^\n\t     ^.^  and will use it to generate your list\t^.^" << endl;
	cout << "==============================================================================" << endl;
	return 0;
}

//overloaded friend function to display favorite games to console
ostream & operator<<(ostream &os, const Anime &anime)
{
	os << "********* Anime Recommendation *********" << endl;
	os << "Anime Name: " << anime.animeName << endl;
	os << "Anime Genre: " << anime.animeGenre << endl;
	os << "Main Character: " << anime.mainCharacter << endl;
	os << "Number of seasons: " << anime.animeSeasons << endl;
	os << "Current Number of Episodes: " << anime.animeEpisodes << endl;
	os << "****************************************" << endl;
	return os;

}