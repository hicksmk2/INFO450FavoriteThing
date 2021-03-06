// FavoriteThing.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "AnimeList.h"
void displayInstructions();

int main()
{
	displayInstructions();		
	AnimeList weabooList;
	bool addAnime = true;
	

	do {
		char answer;
		weabooList.addAnime();
		if (weabooList.getListSize() >= 100)
		{
			addAnime = false;
			break;
		}
		cout << "                                       *                                      " << endl;
		cout << "==============================================================================" << endl;
		cout << "Would you like to add another recommendation?\nIf not, let's view what you entered!. Please press y or n: ";
		cin >> answer;
		cout << "==============================================================================" << endl;
		if (answer == 'y' || answer == 'Y')
		{
			cout << endl;
			cout << "                                  NEW ENTRY                               ";
			addAnime = true;
		}
		else
		{
			addAnime = false;
		}
	} while (addAnime == true);
	cout << "                                       *                                      " << endl;
	cout << "==============================================================================" << endl;
	cout << "Thanks! You've given us weeboo power!  Here is your list amigo!" << endl << endl;
	weabooList.displayList();																					//Displays the list to the user
	return 0;
}

void displayInstructions()
{
	cout << "\t\t*****************************************************" << endl;				// Outputs the instructions to the user
	cout << "\t\t*        Greetings User and welcome to the          *" << endl;
	cout << "\t\t*                 Anime Storage                     *" << endl;
	cout << "\t\t*  --------------------*****------------------------*" << endl;
	cout << "\t\t*      Please fill in the areas below to store      *" << endl;
	cout << "\t\t*           your top anime recommendations.         *" << endl;
	cout << "\t\t*              Press Enter to begin! ^.^            *" << endl;
	cout << "\t\t*****************************************************" << endl;
}