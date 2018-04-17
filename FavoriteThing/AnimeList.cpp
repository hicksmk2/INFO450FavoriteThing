#include "stdafx.h"
#include "AnimeList.h""

AnimeList::AnimeList()				//Default constructor for AnimeList class
{
	listSize = 0;
}

bool AnimeList::detectDuplicate(Anime duplicate)  //Sorts through the list and detects duplicate names and prevents addition to the list.
{
	for (int i = 0; i < listSize; i++)
	{
		if (duplicate.getName() == rList[i].getName())
		{
			cout << "# It appears that you've already entered this item.\n# Your attempt failed as the show " << rList[i].getName() << ", is already in the list.\n# Your entry was not saved." << endl;
			cout << "==============================================================================" << endl;
			return false;
		}
	}
	return true;
}

int AnimeList::addAnime()									//Implements duplicate detection when user attempts to add a new Anime Recommendation
{
	Anime newAnime;
	newAnime.getAnimeRecommendation();
	if (detectDuplicate(newAnime))
	{
		rList[listSize] = newAnime;
		listSize++;
		return 0;
	}
	else
	{
		return ERROR1;
	}
}

int AnimeList::getListSize()								//Retrieves the size of the list
{
	return listSize;
}

void AnimeList::displayList()								//Displays list to the user
{
	int i;
	for (i = 0; i < listSize; i++)
	{
		cout << rList[i];
		cout << endl << endl;
	}
}