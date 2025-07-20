/******************************************************************************
* AUTHOR     : Tamar Figotin
* LAB #14    : Functions - Rock, Paper, Scissors
*******************************************************************************/

#include "Header.h"

/******************************************************************************
 * Functions - Rock, Paper, Scissors
 * ----------------------------------------------------------------------------
 * This program allows a player to play Rock, Paper, Scissors against the
 * computer. In this version if there is a tie the computer wins. The user must
 * beat the computer to win a round. The player will provide their name and the
 * number of rounds they want to play. They will begin by entering their name
 * and the number of rounds they would like to play. For each round the player
 * will input a character to represent their play (‘R’ for rock, ‘P’ for paper,
 * or ‘S’ for scissors). The program will randomly select its play and output
 * whether the player won or lost. After all rounds have completed the program
 * will output the match winner. In the case that the player wins the match it
 * will output their percentage of wins otherwise it will output the
 * percentage of losses.
 * 		- userName   : the user's name
 * 		- roundsPlay : how many rounds they want to play
 *
 * Then, it determines if the user won or lost each round, and once they've
 * completed all rounds, the program ouputs the match winner and percentage of
 * wins if user won, or percentage of losses if user lost.
 * 		- userName      : the user's name
 * 		- userWon       : if the user won or not
 * 		- percentageWon : percentage of wins or losses
 *
 * ----------------------------------------------------------------------------
 * INPUT:
 *     userName   : the user's name
 * 	   roundsPlay : how many rounds they want to play
 * 	   userPlau   : the play of the user (R, P, or S)
 *
 * OUTPUT:
 *     userName      : the user's name
 * 	   userWon       : if the user won or not
 * 	   percentageWon : percentage of wins or losses
 *
 * ----------------------------------------------------------------------------
 * 		EXAMPLE INPUT / OUTPUT:
 *
 * 		Enter Player's Name: Andrew Daniels
 * 		Enter Number of Rounds in Match: 3
 *
 * 		**********************
 * 		** CHOOSE YOUR PLAY **
 * 		**********************
 * 		R - Rock
 * 		P - Paper
 * 		S - Scissors
 * 		Enter your play: R
 *
 * 		Andrew Daniels chooses ROCK!
 * 		Computer chooses PAPER!
 * 		Computer wins, better luck next time, Andrew Daniels!
 *
 * 		**********************
 * 		** CHOOSE YOUR PLAY **
 * 		**********************
 * 		R - Rock
 * 		P - Paper
 * 		S - Scissors
 * 		Enter your play: s
 *
 * 		Andrew Daniels chooses SCISSORS!
 * 		Computer chooses PAPER!
 * 		Andrew Daniels WINS!!
 *
 * 		**********************
 * 		** CHOOSE YOUR PLAY **
 * 		**********************
 * 		R - Rock
 * 		P - Paper
 * 		S - Scissors
 * 		Enter your play: x
 *
 * 		** INVALID INPUT - Please Enter (R, P, or S) **
 *
 * 		R - Rock
 * 		P - Paper
 * 		S - Scissors
 * 		Enter your play: P
 *
 * 		Andrew Daniels chooses PAPER!
 * 		Computer chooses SCISSORS!
 * 		Computer wins, better luck next time, Andrew Daniels!
 *
 * 		**********************************
 * 		*********  FINAL RESULTS  *********
 * 		***********************************
 * 		Andrew Daniels lost 67% of the time!
 *
 ******************************************************************************/

 int main ()
 {
 /*************************************************************************
  * VARIABLES
  *************************************************************************/

	 string userName;     // IN             - user's name
	 int    roundsPlay;   // IN             - # of rounds user wants to play
	 char   userPlay;     // IN, PROC & OUT - user play (R, P, S)
	 char   computerPlay; // PROC & OUT     - computer play (R, P, S)
	 bool   userWon;      // PROC & OUT     - if user won
	 int    winCount;     // PROC           - number of user wins
	 int    roundsCount;  // PROC           - number of rounds for FOR loop
	 float  percentWon;   // PROC & OUT     - percentage of wins/losses

	 // OUTPUT - Class Header
	 PrintClassHeader("Functions - Rock, Paper, Scissors", 14);

	 // INITILIAZE - winCount
	 winCount = 0;

	 // INPUT - userName and roundsPlay
	 GetInput(userName, roundsPlay);

	 // FOR - number of roundsPlay
	 for(roundsCount = 1; roundsCount <= roundsPlay; roundsCount++)
	 {
		 // INPUT - userPlay and ERROR CHECK
		 userPlay = GetAndCheckPlay();

		 // OUTPUT - User's name
		 cout << endl << userName << " chooses ";

		 // OUTPUT - User's play
		 switch(userPlay)
		 {
		 	 case 'R': cout << "ROCK!";
		 	 	 	   break;
		 	 case 'P': cout << "PAPER!";
		 	 	 	   break;
		 	 case 'S': cout << "SCISSORS!";
		 	 	 	   break;
		 }

		 // RANDOMIZE - computerPlay
		 srand(time(NULL));
		 computerPlay = GetComputerPlay();

		 // OUTPUT - Computer
		 cout << endl << "Computer chooses ";

		 // OUTPUT - Computer Play
		 switch(computerPlay)
		 {
			 case 'R': cout << "ROCK!";
					   break;
			 case 'P': cout << "PAPER!";
					   break;
			 case 'S': cout << "SCISSORS!";
					   break;
		 }

		 cout << endl;

		 // PROCESSING - determine if player won (each round)
		 userWon = CheckWin(userPlay, computerPlay);

		 // OUTPUT - if user won
		 OutputWin(userName, userWon);

		 // INCREMENT - winCount if user won
		 if(userWon)
		 {
			 winCount++;
		 }
	 }

	 // CALCULATE - percentage of wins/losses for user
	 setprecision(2);
	 percentWon = (winCount / float(roundsPlay)) * 100;

	 // OUTPUT - winner of match and percentage of wins/losses for user
	 OutputMatchWinner(userName, winCount, roundsPlay, percentWon);

	 return 0;
 }
