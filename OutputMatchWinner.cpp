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
* 	The following paramters need to have a defined value prior to
* 		calling the function:
* 		userName   : user's Name
* 		winCount   : number of user wins
* 		roundsPlay : number of rounds user chose to play
* 		percentWon : percentage of wins for user
*
* POST-CONDITOIONS:
* 	This function returns nothing - this outputs the user's name and a message
* 									stating whether the user or computer won
* 									the total match, as well as the
* 									corresponding percentage of wins/losses.
******************************************************************************/

void OutputMatchWinner (string userName,
						int winCount,
						int roundsPlay,
						int percentWon)
{
/******************************************************************************
* PROCESSING for OutputMatchWinner: Function outputs winner of match (winner of
* 								    most rounds), if it's a tie, it outputs that
* 								    user tied the computer.
******************************************************************************/
	CreateStringOfChar('*', 35);

	 cout << "*********  FINAL RESULTS  *********";

	 CreateStringOfChar('*', 35);

	 cout << userName;

	 if(winCount > (roundsPlay/2.0))
	 {
		 cout << " is the WINNER, WINNER, CHICKEN DINNER!!" << endl;
		 cout << userName << " won " << percentWon << "% of the time!";
	 }
	 else if(winCount == (roundsPlay/2.0))
	 {
		 cout << " tied the computer";
	 }
	 else
	 {
		 cout << " lost " << 100 - percentWon << "% of the time!";
	 }
}
