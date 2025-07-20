/******************************************************************************
* AUTHOR     : Tamar Figotin
* LAB #14    : Functions - Rock, Paper, Scissors
*******************************************************************************/

#ifndef HEADER_H_
#define HEADER_H_

#include <iostream> /* cout, cin      */
#include <iomanip>  /* setw, setfill  */
#include <string>   /* string class   */
#include <stdlib.h> /*for srand, rand */
#include <time.h>   /* for time       */
using namespace std;

/******************************************************************************
 * FUNCTION PrintClassHeader
 * ----------------------------------------------------------------------------
 * 	This function receives an assignment name, type, and number then outputs
 * 	the appropriate class heading. asType has set lab as default, since there
 * 	are more labs than assignments for this class.
 *
 * ==> This function will output the class heading
 *****************************************************************************/
void PrintClassHeader(string asName,         // IN - assignment name
				      int    asNum,          // IN - assignment number
					  char   asType = 'L');  // IN - assignment type
											 //	     'L' - Lab
											 //      'A' - Assignment
                                             // Set default to 'L' for this
                                             // this application.

/*****************************************************************************
 * FUNCTION CreateStringOfChar
 * --------------------------------------------------------------------------
 *  Outputs a line filled with a given character and length.
 *
 * ==> Returns nothing - This will output a specified line of characters
 ****************************************************************************/
void CreateStringOfChar(char fillChar,
                        int  stringLength);

/*****************************************************************************
 * FUNCTION GetInput
 * --------------------------------------------------------------------------
 * Reads in as user input: the user's name and the number of rounds they will
 * play.
 *
 * ==> Returns nothing - This will output prompts for input
 ****************************************************************************/
void GetInput(string &userName,
			  int    &roundsPlay);

/*****************************************************************************
 * FUNCTION GetAndCheckPlay
 * ----------------------------------------------------------------------------
 * Reads in as user input: userPlay.
 * It will validate each of the following inputs: R (Rock), P (Paper), or S
 * (Scissors),and returns an error message if the inputs do not match one of
 * the characters.
 *
 * ==> Returns userPlay.
 *         userPlay is validated and returned as a character.
*****************************************************************************/
char GetAndCheckPlay();

/*****************************************************************************
 * FUNCTION GetComputerPlay
 * ----------------------------------------------------------------------------
 * Does not read in any user input. Creates a random number between 1 and 3
 * and assigns each value to R, P, or S.
 *
 * ==> Returns computerPlay.
 *         computerPlay is returned as a character.
*****************************************************************************/
char GetComputerPlay();

/*****************************************************************************
 * FUNCTION CheckWin
 * --------------------------------------------------------------------------
 *   Receives in userPlay and computerPlay.
 *     This function will return true if userPlay beats computer play in one of
 *     three instances of rock paper & scissors and returns false if userPlay
 *     doesn't beat computerPlay (including ties).
 *
 * ==> returns userWon
 *          userWon is a boolean variable that holds whether userPlay beat
 *          computerPlay (true) or if computerPlay beat userPlay (false).
 ****************************************************************************/
bool CheckWin (char userPlay,
			   char computerPlay);

/*****************************************************************************
 * FUNCTION OutputWin
 * --------------------------------------------------------------------------
 *   Receives in userName and userWon. This function will output the user's
 *   name and the win status, which depends on if userWon is true (user won)
 *   or false (computer won).
 *
 * ==> returns nothing - this outputs the user's name and a message stating
 *                       whether the user won or the computer won.
 ****************************************************************************/
void OutputWin(string userName,
			   bool   userWon);

/*****************************************************************************
 * FUNCTION OutputMatchWinner
 * --------------------------------------------------------------------------
 *   Receives in userName, winCount, roundsPlay, and percentWon. This function
 *   will determine if the amount of wins is greater than half of the rounds
 *   played, equal to half played, or less. Then the function will output the
 *   user's name and the corresponding percentage of wins/losses.
 *
 * ==> returns nothing - this outputs the user's name and a message stating
 *                       whether the user or computer won the total match, as
 *                       well as the corresponding percentage of wins/losses.
 ****************************************************************************/
void OutputMatchWinner (string userName,
						int winCount,
						int roundsPlay,
						int percentWon);



#endif /* HEADER_H_ */
