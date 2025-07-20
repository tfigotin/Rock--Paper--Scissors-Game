/******************************************************************************
* AUTHOR     : Tamar Figotin
* LAB #14    : Functions - Rock, Paper, Scissors
*******************************************************************************/
#include "Header.h"

/*****************************************************************************
* FUNCTION PrintClassHeader
* ----------------------------------------------------------------------------
* This function outputs the class header.
* ----------------------------------------------------------------------------
* PRE-CONDITOIONS:
* 	The following parameters need to have a defined value prior to calling
* 		the function:
* 		asName : name of assignment
* 		asNum  : assignment/lab number
* 		asType : assignment type (default is lab)
*
* POST-CONDITOIONS:
* 	This function returns nothing.
******************************************************************************/

 void PrintClassHeader(string asName,         // IN - assignment name
					   int    asNum,          // IN - assignment number
					   char   asType) 	      // IN - assignment type
										      //	  'L' - Lab
										   	  //      'A' - Assignment
 {
  /*****************************************************************************
  * CONSTANTS
  * ----------------------------------------------------------------------------
  * FORMATTING - used for setws
  * ----------------------------------------------------------------------------
  * TITLE_COL  - the first column that displays headings for the date
  *****************************************************************************/
   const short TITLE_COL = 14;

  /*****************************************************************************
   * VARIABLES
   ****************************************************************************/
   string asStr;       // PROC & OUT  - type of assignment (LAB, ASSIGN, etc.)
   short  asNumCol;    // CALC & FORM - column width for the assignment number
					 //				  specifically for the assignment type

  /*****************************************************************************
   * PROCESSING: 1. Assigns the asStr (assignment string) based on the AS_TYPE
   * 			  (assignment type).
   * 			2. Assigns the asNumCol (assignment column width for the
   * 			   assignment number). The setw will format appropriately based
   * 			   on if this is a lab 'L' or assignment 'A'.
   *
   ****************************************************************************/
   asStr = "ASSIGNMENT";
   if (toupper (asType) == 'L')
   {
	  asStr = "LAB";
   }
   asStr   += " #";
   asNumCol = TITLE_COL - asStr.length();

/*******************************************************************************
 * OUTPUT - The Class Heading
 * -----------------------------------------------------------------------------
 * ****************************************************************************
 * * PROGRAMMED BY : Tamar FigotiN
 * * CLASS         : CS1A
 * * SECTION       : TTh: 11am
 * * ASSIGNMENT #6 : Boolean Expressions - Military Academy
 * ****************************************************************************
*******************************************************************************/

	cout << left;
	cout << "************************************************************\n";
	cout << "*  PROGRAMMED BY  : Tamar Figotin\n";
	cout << "*  " << asStr  << setw(asNumCol)       << asNum << " : "
			      << asName << endl;
	cout << "************************************************************\n\n";
	cout << right;

}
