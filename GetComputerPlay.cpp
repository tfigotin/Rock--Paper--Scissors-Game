/******************************************************************************
* AUTHOR     : Tamar Figotin
* LAB #14    : Functions - Rock, Paper, Scissors
*******************************************************************************/
#include "Header.h"
/******************************************************************************/

/*****************************************************************************
 * FUNCTION GetComputerPlay
 * --------------------------------------------------------------------------
 * Does not read in any input. This function generates a random number between
 * 1 and 3. It will then assign the number to R, P, or S respectively.
 * computerPlay is then returned as a character.
 *
 * --------------------------------------------------------------------------
 * PRE-CONDTITIONS
 * No pre-conditions since there are no parameters.
 *
 * POST-CONDITIONS
 *  ==> Returns computerPlay.
 *          computerPlay is returned as a character.
 *
 ****************************************************************************/

char GetComputerPlay()
{
	/**************************************************************************
	* VARIABLES
	***************************************************************************/
	int computerPlayNumber;  // PROC       - assigns a number to R, P, and S,
							 //              so rand function can randomize
							 // 		     play for computer.
	char computerPlay;       // PROC & OUT - once randomized number is generated,
						     //              it is assigned to computer play as
						     //              R, P, or S and returned to main.
/******************************************************************************
* PROCESSING for GetComputerPlay: Function randomizes a number between 1 and 3
*                                 for computerPlayNumber, and then if it
*                                 randomizes to 1 it assigns computerPlay to R,
*                                 if it randomizes to 2 it assigns computerPlay
*                                 to P, if it randomizes to 3 it assigns
*                                 computerPlay to S. Once assigned, it returns
*                                 computerPlay to main.
******************************************************************************/
	computerPlayNumber = rand()% 3 + 1;

	switch(computerPlayNumber)
	 {
		 case 1: computerPlay = 'R';
				 break;
		 case 2: computerPlay = 'P';
				 break;
		 case 3: computerPlay = 'S';
				 break;
	 }

	return computerPlay;
}


