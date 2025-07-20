/******************************************************************************
* AUTHOR     : Tamar Figotin
* LAB #14    : Functions - Rock, Paper, Scissors
*******************************************************************************/
#include "Header.h"
/******************************************************************************/

/*****************************************************************************
* FUNCTION CreateStringOfChar
* ----------------------------------------------------------------------------
* This function outputs a string of characters.
* ----------------------------------------------------------------------------
* PRE-CONDITOIONS:
* 	The following parameters need to have a defined value prior to calling
* 		the function:
* 		fillChar     : character for string
* 		stringLength : length of string
*
* POST-CONDITOIONS:
* 	This function returns nothing.
******************************************************************************/

void CreateStringOfChar(char fillChar, int stringLength)
{
/******************************************************************************
* PROCESSING for CreateStringOfChar: Function
******************************************************************************/
	cout << endl;
	cout << setfill(fillChar);
	cout << setw(stringLength) << fillChar;
	cout << setfill(' ');
	cout << endl;
}




