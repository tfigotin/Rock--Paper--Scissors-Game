/******************************************************************************
* AUTHOR     : Tamar Figotin
* LAB #14    : Functions - Rock, Paper, Scissors
*******************************************************************************/
#include "Header.h"
/******************************************************************************/

/*****************************************************************************
 * FUNCTION OutputWin
 * --------------------------------------------------------------------------
 *   Receives in userName and userWon.
 *     Will check to see if the user or computer won, then output the user's
 *     name with the corresponding message.
 *
 * --------------------------------------------------------------------------
 * PRE-CONDTITIONS
 *    The following arguments need to be passed in:
 *
 *    userName  : The user's name
 *    userWon   : Will check to see if the user or computer won
 *
 * POST-CONDITIONS
 *    returns nothing - this outputs the user's name and a message stating
 *                       whether the user won or the computer won.
 ****************************************************************************/
void OutputWin(string userName,  // IN   & OUT - the user's name
			   bool   userWon)   // PROC & OUT - the win status
{
/******************************************************************************
* PROCESSING for OutputWin: Function outputs winner of each round. If user ties
* 							with computer, computer wins the round.
******************************************************************************/
	if(userWon)
	 {
		 cout << userName << " WINS!!";
	 }
	 else
	 {
		 cout << "Computer wins, better luck next time, ";
		 cout << userName << "!";
	 }

	 cout << endl;
}
