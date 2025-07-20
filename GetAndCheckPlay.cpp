/******************************************************************************
* AUTHOR     : Tamar Figotin
* LAB #14    : Functions - Rock, Paper, Scissors
*******************************************************************************/
#include "Header.h"
/******************************************************************************/

/*****************************************************************************
* FUNCTION GetAndCheckPlay
* ----------------------------------------------------------------------------
* This function provides the menu below for the user. It allows them to choose
* 	a play (‘R’, ‘P’, or ‘S’). Error checks the players choice and returns
* 	a character representing their play
* ----------------------------------------------------------------------------
* PRE-CONDITOIONS:
* 	This function has no parameters and therefore no pre-conditions.
*
* POST-CONDITOIONS:
* 	This function validates userPlay and returns it as a character.
******************************************************************************/

/*****************************************************************************
* VARIABLES
*****************************************************************************/
char userPlay;    // IN, PROC & OUT - user's play (R, P, or S)
bool invalidPlay; // PROC           - invalid user play (anything but (R,P,or S)


char GetAndCheckPlay()
{
/******************************************************************************
* PROCESSING for GetAndCheckPlay: Function reads in a character input and checks
* 								  that it is a valid input, R (rock), P (paper),
* 								  or S (scissors). Once it receives a valid
* 								  input, it returns the valid character input.
******************************************************************************/
	// OUTPUT - Choose Your Play
	CreateStringOfChar('*', 22);

	cout << "** CHOOSE YOUR PLAY **";

	CreateStringOfChar('*', 22);

	cout << "R - Rock\n";
	cout << "P - Paper\n";
	cout << "S - Scissors\n";

	// INPUT - userPlay
	cout << "Enter your play: ";
	cin.get(userPlay);
	cin.ignore(1000, '\n');
	userPlay = toupper(userPlay);

	// VALIDATE - userPlay
	do //while (invalidPlay);
	{
		if (userPlay != 'R' && userPlay != 'P' &&
			userPlay != 'S')
		{
			cin.clear();
			cout << "\n** INVALID INPUT - Please Enter (R, P, or S) **\n\n";

			cout << "R - Rock\n";
			cout << "P - Paper\n";
			cout << "S - Scissors\n";
			cout << "Enter your play: ";
			cin.get(userPlay);
			cin.ignore(1000, '\n');
			userPlay = toupper(userPlay);
			invalidPlay = true;

		}
		else
		{
			invalidPlay = false;
		}
	}while (invalidPlay);

	return userPlay;
}


