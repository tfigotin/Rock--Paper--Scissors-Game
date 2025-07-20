/******************************************************************************
* AUTHOR     : Tamar Figotin
* LAB #14    : Functions - Rock, Paper, Scissors
*******************************************************************************/
#include "Header.h"
/******************************************************************************/

/*****************************************************************************
* FUNCTION GetInput
* ----------------------------------------------------------------------------
* This function outputs a string of characters.
* ----------------------------------------------------------------------------
* PRE-CONDITOIONS:
* 	The following parameters need to have a defined value prior to calling
* 		the function:
* 		userName     : user's name
* 		roundsPlay   : number of rounds they want to play
*
* POST-CONDITOIONS:
* 	This function returns nothing.
******************************************************************************/

void GetInput(string &userName,
			  int    &roundsPlay)
{
/******************************************************************************
* PROCESSING for GetInput: 1. Functions outputs prompt for userName and then
*                             reads in input for userName
* 						   2. Functions outputs prompt for roundsPlay and then
*                             reads in input for roundsPlay
******************************************************************************/
	cout << "Enter Player's Name: ";
	getline(cin, userName);

	cout << "Enter Number of Rounds in Match: ";
	cin  >> roundsPlay;
	cin.ignore(1000, '\n');

}

