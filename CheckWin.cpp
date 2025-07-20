/******************************************************************************
* AUTHOR     : Tamar Figotin
* LAB #14    : Functions - Rock, Paper, Scissors
*******************************************************************************/
#include "Header.h"
/******************************************************************************/

/*****************************************************************************
* FUNCTION CheckWin
* ----------------------------------------------------------------------------
* This function checks if the player has won, returns true if they won or
* 	false if the computer won.
* ----------------------------------------------------------------------------
* PRE-CONDITOIONS:
* 	The following parameters need to have a defined value prior to calling
* 		the function:
* 		userPlay     : user's play (R, P, or S)
* 		computerPlay : computer's play (R, P, or S)
*
* POST-CONDITOIONS:
* 	This function returns true if the user won and false if the user lost.
******************************************************************************/
bool CheckWin (char userPlay,    // IN & PROC - user's Play (R, P , or S)
			   char computerPlay)// IN & PROC - computer's Play (R, P , or S)
{
/*****************************************************************************
* VARIABLES
*****************************************************************************/
bool checkWin;  // PROC - determines if user won or lost the round

/******************************************************************************
* PROCESSING for CheckWin: Function evaluates if user or computer won each
* 						   round. Function returns 0 if user lost and 1 if
* 						   user won. If they tie, computer wins the round.
******************************************************************************/
	if(userPlay == 'P' && computerPlay == 'R')
	{
		checkWin = true;
	}
	else if(userPlay == 'R' && computerPlay == 'S')
	{
		checkWin = true;
	}
	else if(userPlay == 'S' && computerPlay == 'P')
	{
		checkWin = true;
	}
	else
	{
		checkWin = false;
	}

	return checkWin;
}
