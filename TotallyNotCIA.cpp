// TotallyNotCIA.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/* Eli Beutler
July 17th, 2022
Notally Not a CIA Training Simulation
*/
#include <iostream> // standard
#include <cstdlib> // for random
#include <ctime> // for random
#include <Windows.h> // for beep
#include <fstream> // for accessing other files
#include <string> // for string stuff life funding number of vowels
#include <vector> // for vector functionality
#include <cctype> // allows for differentiation between capital and lowercase

using namespace std; //allowing for certain formatting within code below



// VARIBLES
string agentName = "non-CIA";
vector<string> guessedLetters;
string currentGuess = "gsgasdgs";
string continueGame = "NO";

int main()
{
	srand(time(0)); // for setting randomizer
	//cout << "test" << endl;

	// Display Title of the program to the user

	cout << "If you go any further without being allowed here, legal action will pursue!" << endl; // the idea is the CIA posted this website where anyone could technically access it.
	system("pause");
	cout << "last chance, leave or face legal consequences!" << endl;
	system("pause");
	cout << "Welcome potential Non-CIA agent, if you are not supposed to be taking this Non-CIA TRAINING SIMULATION, then you are being SWATed as we speak and being put into 'protective custody'." << endl;
	system("pause");

	// Ask the recruit to log in using their name
	cout << "Log in with your username (remember NO SPACES):" << endl;

	// Hold the recruit's name in a var, and address them by it throughout the simulation.
	cin >> agentName;
	cout << "greetings: " << agentName << endl;
	system("pause");
	// Display an overview of what Keywords II is to the recruit 
	cout << "This Non-CIA TRAINING SIMILATION will teach you to figure out code. You have the pleasure knowing that each word is 10 characters long and use no characters outside the basic a-z." << endl;

	// Display directions to the recruit on how to use Keywords
	cout << "Think of this like Hangman. You have 6 incorrect guesses you can make within one word. The Head, Body, 2 arms, and 2 legs." << endl;
	system("pause");
	cout << "You will run through 10 case files but only 3 of the secret workds will be picked each time." << endl;
	system("pause");


	// Create a collection of 10 words you had written down manually
	string codeWords[10] = { "nomination" , "leadership" , "accessible" , "phychology" , "pedestrian" , "compliance" , "compromise" , "assignment" , "censorship" , "corruption" };

	//string wordMYSTERY[10] = { "_", "_", "_", "_", "_", "_", "_", "_", "_", "_" };


	string wordONE[10] = { "n", "o", "m", "i", "n", "a", "t", "i", "o", "n" };
	string wordTWO[10] = { "l", "e", "a", "d", "e", "r", "s", "h", "i", "p" };
	string wordTHREE[10] = { "a", "c", "c", "e", "s", "s", "i", "b", "l", "e" };
	string wordFOUR[10] = { "p", "s", "y", "c", "h", "o", "l", "o", "g", "y" };
	string wordFIVE[10] = { "p", "e", "d", "e", "s", "t", "r", "i", "a", "n" };
	string wordSIX[10] = { "c", "o", "m", "p", "l", "i", "a", "n", "c", "e" };
	string wordSEVEN[10] = { "c", "o", "m", "p", "r", "o", "m", "i", "s", "e" };
	string wordEIGHT[10] = { "a", "s", "s", "i", "g", "n", "m", "e", "n", "t" };
	string wordNINE[10] = { "c", "e", "n", "s", "o", "r", "s", "h", "i", "n" };
	string wordTEN[10] = { "c", "o", "r", "r", "u", "p", "t", "i", "o", "n" };

	// Create an int var to count the number of simulations being run starting at 1
	int caseFile = 1;
	// Display the simulation # is starting to the recruit. 

	cout << endl;
	cout << endl;
	
	string wordMYSTERY0 = "_";
	string wordMYSTERY1 = "_";
	string wordMYSTERY2 = "_";
	string wordMYSTERY3 = "_";
	string wordMYSTERY4 = "_";
	string wordMYSTERY5 = "_";
	string wordMYSTERY6 = "_";
	string wordMYSTERY7 = "_";
	string wordMYSTERY8 = "_";
	string wordMYSTERY9 = "_";



	// Pick new 3 random words from your collection as the secret code word the recruit has to guess. 
	int caseONE = 0;
	int caseTWO = 0;
	int caseTHREE = 0;

	caseONE = (rand() % 9);
	caseTWO = (rand() % 9);
	caseTHREE = (rand() % 9);

	int incorrectGuess = 6;



	//CASE 1
	while (caseFile == 1) {

		int incorrectGuess = 6;



		while (incorrectGuess != 0) { // funcitons in reverse order
			// While recruit hasn’t made too many incorrect guesses and hasn’t guessed the secret word
			cout << "Simulation: " << caseFile << endl;
			cout << endl;
			cout << endl;
			//     Tell recruit how many incorrect guesses he or she has left
			cout << agentName << ", you have " << incorrectGuess << " incorrect guesses you can still make." << endl;
			//     Show recruit the letters he or she has guessed
			cout << "Previous Guesses: " << endl;
			for (int i = 0; i < guessedLetters.size(); i++)
			cout << guessedLetters.at(i) << ' ';

			

			//     Show player how much of the secret word he or she has guessed
			cout << endl;
			cout << endl;
			//cout << codeWords[caseONE] << endl;
			cout << wordMYSTERY0 << wordMYSTERY1 << wordMYSTERY2 << wordMYSTERY3 << wordMYSTERY4 << wordMYSTERY5 << wordMYSTERY6 << wordMYSTERY7 << wordMYSTERY8 << wordMYSTERY9 << endl;

			//     Get recruit's next guess
			cout << "place your next guess" << endl;

			//     While recruit has entered a letter that he or she has already guessed
			cin >> currentGuess;
			guessedLetters.push_back(currentGuess);


			if (caseONE == 0) {
				if (currentGuess == wordONE[0]) {
					wordMYSTERY0 = currentGuess;
				}
				if (currentGuess == wordONE[1]) {
					wordMYSTERY1 = currentGuess;
				}
				if (currentGuess == wordONE[2]) {
					wordMYSTERY2 = currentGuess;
				}
				if (currentGuess == wordONE[3]) {
					wordMYSTERY3 = currentGuess;
				}
				if (currentGuess == wordONE[4]) {
					wordMYSTERY4 = currentGuess;
				}
				if (currentGuess == wordONE[5]) {
					wordMYSTERY5 = currentGuess;
				}
				if (currentGuess == wordONE[6]) {
					wordMYSTERY6 = currentGuess;
				}
				if (currentGuess == wordONE[7]) {
					wordMYSTERY7 = currentGuess;
				}
				if (currentGuess == wordONE[8]) {
					wordMYSTERY8 = currentGuess;
				}
				if (currentGuess == wordONE[9]) {
					wordMYSTERY9 = currentGuess;
				}


			}

			if (caseONE == 1) {
				if (currentGuess == wordTWO[0]) {
					wordMYSTERY0 = currentGuess;
				}
				if (currentGuess == wordTWO[1]) {
					wordMYSTERY1 = currentGuess;
				}
				if (currentGuess == wordTWO[2]) {
					wordMYSTERY2 = currentGuess;
				}
				if (currentGuess == wordTWO[3]) {
					wordMYSTERY3 = currentGuess;
				}
				if (currentGuess == wordTWO[4]) {
					wordMYSTERY4 = currentGuess;
				}
				if (currentGuess == wordTWO[5]) {
					wordMYSTERY5 = currentGuess;
				}
				if (currentGuess == wordTWO[6]) {
					wordMYSTERY6 = currentGuess;
				}
				if (currentGuess == wordTWO[7]) {
					wordMYSTERY7 = currentGuess;
				}
				if (currentGuess == wordTWO[8]) {
					wordMYSTERY8 = currentGuess;
				}
				if (currentGuess == wordTWO[9]) {
					wordMYSTERY9 = currentGuess;
				}

			}

			if (caseONE == 2) {
				if (currentGuess == wordTHREE[0]) {
					wordMYSTERY0 = currentGuess;
				}
				if (currentGuess == wordTHREE[1]) {
					wordMYSTERY1 = currentGuess;
				}
				if (currentGuess == wordTHREE[2]) {
					wordMYSTERY2 = currentGuess;
				}
				if (currentGuess == wordTHREE[3]) {
					wordMYSTERY3 = currentGuess;
				}
				if (currentGuess == wordTHREE[4]) {
					wordMYSTERY4 = currentGuess;
				}
				if (currentGuess == wordTHREE[5]) {
					wordMYSTERY5 = currentGuess;
				}
				if (currentGuess == wordTHREE[6]) {
					wordMYSTERY6 = currentGuess;
				}
				if (currentGuess == wordTHREE[7]) {
					wordMYSTERY7 = currentGuess;
				}
				if (currentGuess == wordTHREE[8]) {
					wordMYSTERY8 = currentGuess;
				}
				if (currentGuess == wordTHREE[9]) {
					wordMYSTERY9 = currentGuess;
				}

			}

			if (caseONE == 3) {
				if (currentGuess == wordFOUR[0]) {
					wordMYSTERY0 = currentGuess;
				}
				if (currentGuess == wordFOUR[1]) {
					wordMYSTERY1 = currentGuess;
				}
				if (currentGuess == wordFOUR[2]) {
					wordMYSTERY2 = currentGuess;
				}
				if (currentGuess == wordFOUR[3]) {
					wordMYSTERY3 = currentGuess;
				}
				if (currentGuess == wordFOUR[4]) {
					wordMYSTERY4 = currentGuess;
				}
				if (currentGuess == wordFOUR[5]) {
					wordMYSTERY5 = currentGuess;
				}
				if (currentGuess == wordFOUR[6]) {
					wordMYSTERY6 = currentGuess;
				}
				if (currentGuess == wordFOUR[7]) {
					wordMYSTERY7 = currentGuess;
				}
				if (currentGuess == wordFOUR[8]) {
					wordMYSTERY8 = currentGuess;
				}
				if (currentGuess == wordFOUR[9]) {
					wordMYSTERY9 = currentGuess;
				}

			}

			if (caseONE == 4) {
				if (currentGuess == wordFIVE[0]) {
					wordMYSTERY0 = currentGuess;
				}
				if (currentGuess == wordFIVE[1]) {
					wordMYSTERY1 = currentGuess;
				}
				if (currentGuess == wordFIVE[2]) {
					wordMYSTERY2 = currentGuess;
				}
				if (currentGuess == wordFIVE[3]) {
					wordMYSTERY3 = currentGuess;
				}
				if (currentGuess == wordFIVE[4]) {
					wordMYSTERY4 = currentGuess;
				}
				if (currentGuess == wordFIVE[5]) {
					wordMYSTERY5 = currentGuess;
				}
				if (currentGuess == wordFIVE[6]) {
					wordMYSTERY6 = currentGuess;
				}
				if (currentGuess == wordFIVE[7]) {
					wordMYSTERY7 = currentGuess;
				}
				if (currentGuess == wordFIVE[8]) {
					wordMYSTERY8 = currentGuess;
				}
				if (currentGuess == wordFIVE[9]) {
					wordMYSTERY9 = currentGuess;
				}

			}

			if (caseONE == 5) {
				if (currentGuess == wordSIX[0]) {
					wordMYSTERY0 = currentGuess;
				}
				if (currentGuess == wordSIX[1]) {
					wordMYSTERY1 = currentGuess;
				}
				if (currentGuess == wordSIX[2]) {
					wordMYSTERY2 = currentGuess;
				}
				if (currentGuess == wordSIX[3]) {
					wordMYSTERY3 = currentGuess;
				}
				if (currentGuess == wordSIX[4]) {
					wordMYSTERY4 = currentGuess;
				}
				if (currentGuess == wordSIX[5]) {
					wordMYSTERY5 = currentGuess;
				}
				if (currentGuess == wordSIX[6]) {
					wordMYSTERY6 = currentGuess;
				}
				if (currentGuess == wordSIX[7]) {
					wordMYSTERY7 = currentGuess;
				}
				if (currentGuess == wordSIX[8]) {
					wordMYSTERY8 = currentGuess;
				}
				if (currentGuess == wordSIX[9]) {
					wordMYSTERY9 = currentGuess;
				}

			}

			if (caseONE == 6) {
				if (currentGuess == wordSEVEN[0]) {
					wordMYSTERY0 = currentGuess;
				}
				if (currentGuess == wordSEVEN[1]) {
					wordMYSTERY1 = currentGuess;
				}
				if (currentGuess == wordSEVEN[2]) {
					wordMYSTERY2 = currentGuess;
				}
				if (currentGuess == wordSEVEN[3]) {
					wordMYSTERY3 = currentGuess;
				}
				if (currentGuess == wordSEVEN[4]) {
					wordMYSTERY4 = currentGuess;
				}
				if (currentGuess == wordSEVEN[5]) {
					wordMYSTERY5 = currentGuess;
				}
				if (currentGuess == wordSEVEN[6]) {
					wordMYSTERY6 = currentGuess;
				}
				if (currentGuess == wordSEVEN[7]) {
					wordMYSTERY7 = currentGuess;
				}
				if (currentGuess == wordSEVEN[8]) {
					wordMYSTERY8 = currentGuess;
				}
				if (currentGuess == wordSEVEN[9]) {
					wordMYSTERY9 = currentGuess;
				}

			}

			if (caseONE == 7) {
				if (currentGuess == wordEIGHT[0]) {
					wordMYSTERY0 = currentGuess;
				}
				if (currentGuess == wordEIGHT[1]) {
					wordMYSTERY1 = currentGuess;
				}
				if (currentGuess == wordEIGHT[2]) {
					wordMYSTERY2 = currentGuess;
				}
				if (currentGuess == wordEIGHT[3]) {
					wordMYSTERY3 = currentGuess;
				}
				if (currentGuess == wordEIGHT[4]) {
					wordMYSTERY4 = currentGuess;
				}
				if (currentGuess == wordEIGHT[5]) {
					wordMYSTERY5 = currentGuess;
				}
				if (currentGuess == wordEIGHT[6]) {
					wordMYSTERY6 = currentGuess;
				}
				if (currentGuess == wordEIGHT[7]) {
					wordMYSTERY7 = currentGuess;
				}
				if (currentGuess == wordEIGHT[8]) {
					wordMYSTERY8 = currentGuess;
				}
				if (currentGuess == wordEIGHT[9]) {
					wordMYSTERY9 = currentGuess;
				}

			}

			if (caseONE == 8) {
				if (currentGuess == wordNINE[0]) {
					wordMYSTERY0 = currentGuess;
				}
				if (currentGuess == wordNINE[1]) {
					wordMYSTERY1 = currentGuess;
				}
				if (currentGuess == wordNINE[2]) {
					wordMYSTERY2 = currentGuess;
				}
				if (currentGuess == wordNINE[3]) {
					wordMYSTERY3 = currentGuess;
				}
				if (currentGuess == wordNINE[4]) {
					wordMYSTERY4 = currentGuess;
				}
				if (currentGuess == wordNINE[5]) {
					wordMYSTERY5 = currentGuess;
				}
				if (currentGuess == wordNINE[6]) {
					wordMYSTERY6 = currentGuess;
				}
				if (currentGuess == wordNINE[7]) {
					wordMYSTERY7 = currentGuess;
				}
				if (currentGuess == wordNINE[8]) {
					wordMYSTERY8 = currentGuess;
				}
				if (currentGuess == wordNINE[9]) {
					wordMYSTERY9 = currentGuess;
				}

			}

			if (caseONE == 9) {
				if (currentGuess == wordTEN[0]) {
					wordMYSTERY0 = currentGuess;
				}
				if (currentGuess == wordTEN[1]) {
					wordMYSTERY1 = currentGuess;
				}
				if (currentGuess == wordTEN[2]) {
					wordMYSTERY2 = currentGuess;
				}
				if (currentGuess == wordTEN[3]) {
					wordMYSTERY3 = currentGuess;
				}
				if (currentGuess == wordTEN[4]) {
					wordMYSTERY4 = currentGuess;
				}
				if (currentGuess == wordTEN[5]) {
					wordMYSTERY5 = currentGuess;
				}
				if (currentGuess == wordTEN[6]) {
					wordMYSTERY6 = currentGuess;
				}
				if (currentGuess == wordTEN[7]) {
					wordMYSTERY7 = currentGuess;
				}
				if (currentGuess == wordTEN[8]) {
					wordMYSTERY8 = currentGuess;
				}
				if (currentGuess == wordTEN[9]) {
					wordMYSTERY9 = currentGuess;
				}

			}

			if (currentGuess != wordMYSTERY0 && currentGuess != wordMYSTERY1 && currentGuess != wordMYSTERY2 && currentGuess != wordMYSTERY3 && currentGuess != wordMYSTERY4 && currentGuess != wordMYSTERY5 && currentGuess != wordMYSTERY6 && currentGuess != wordMYSTERY7 && currentGuess != wordMYSTERY8 && currentGuess != wordMYSTERY9)
			{
				cout << "This letter was incorrect." << endl;
				incorrectGuess = incorrectGuess - 1;
			}

system("pause");




// win condition 
if (wordMYSTERY0 != "_" && wordMYSTERY1 != "_" && wordMYSTERY2 != "_" && wordMYSTERY3 != "_" && wordMYSTERY4 != "_" && wordMYSTERY5 != "_" && wordMYSTERY6 != "_" && wordMYSTERY7 != "_" && wordMYSTERY8 != "_" && wordMYSTERY9 != "_")
{
	cout << "YOU HAVE BEAT THE CASE FILE" << endl;
	system("pause");
	cout << "if you would like to move onto a new case file, type YES" << endl;
	cin >> continueGame;

		if (continueGame == "YES"){
			caseFile = caseFile + 1;
}
		else {
			caseFile = 0;
		}


// option to try a new casefile
		}

	}
	// lose condition
	if (incorrectGuess == 0)
	{
		cout << "You are unfit to serve." << endl;
		system("pause");
		caseFile = 0;
	}


	}




	//CASE 2
	while (caseFile == 2) {

		int incorrectGuess = 6;

		 wordMYSTERY0 == "_";
		 wordMYSTERY1 == "_";
		 wordMYSTERY2 == "_";
		 wordMYSTERY3 == "_";
		 wordMYSTERY4 == "_";
		 wordMYSTERY5 == "_";
		 wordMYSTERY6 == "_";
		 wordMYSTERY7 == "_";
		 wordMYSTERY8 == "_";
		 wordMYSTERY9 == "_";


		while (incorrectGuess != 0) { // funcitons in reverse order
			// While recruit hasn’t made too many incorrect guesses and hasn’t guessed the secret word
			cout << "Simulation: " << caseFile << endl;
			cout << endl;
			cout << endl;
			//     Tell recruit how many incorrect guesses he or she has left
			cout << agentName << ", you have " << incorrectGuess << " incorrect guesses you can still make." << endl;
			//     Show recruit the letters he or she has guessed
			cout << "Previous Guesses: " << endl;
			for (int i = 0; i < guessedLetters.size(); i++)
				cout << guessedLetters.at(i) << ' ';



			//     Show player how much of the secret word he or she has guessed
			cout << endl;
			cout << endl;
			//cout << codeWords[caseONE] << endl;
			cout << wordMYSTERY0 << wordMYSTERY1 << wordMYSTERY2 << wordMYSTERY3 << wordMYSTERY4 << wordMYSTERY5 << wordMYSTERY6 << wordMYSTERY7 << wordMYSTERY8 << wordMYSTERY9 << endl;

			//     Get recruit's next guess
			cout << "place your next guess" << endl;

			//     While recruit has entered a letter that he or she has already guessed
			cin >> currentGuess;
			guessedLetters.push_back(currentGuess);


			if (caseONE == 0) {
				if (currentGuess == wordONE[0]) {
					wordMYSTERY0 = currentGuess;
				}
				if (currentGuess == wordONE[1]) {
					wordMYSTERY1 = currentGuess;
				}
				if (currentGuess == wordONE[2]) {
					wordMYSTERY2 = currentGuess;
				}
				if (currentGuess == wordONE[3]) {
					wordMYSTERY3 = currentGuess;
				}
				if (currentGuess == wordONE[4]) {
					wordMYSTERY4 = currentGuess;
				}
				if (currentGuess == wordONE[5]) {
					wordMYSTERY5 = currentGuess;
				}
				if (currentGuess == wordONE[6]) {
					wordMYSTERY6 = currentGuess;
				}
				if (currentGuess == wordONE[7]) {
					wordMYSTERY7 = currentGuess;
				}
				if (currentGuess == wordONE[8]) {
					wordMYSTERY8 = currentGuess;
				}
				if (currentGuess == wordONE[9]) {
					wordMYSTERY9 = currentGuess;
				}


			}

			if (caseONE == 1) {
				if (currentGuess == wordTWO[0]) {
					wordMYSTERY0 = currentGuess;
				}
				if (currentGuess == wordTWO[1]) {
					wordMYSTERY1 = currentGuess;
				}
				if (currentGuess == wordTWO[2]) {
					wordMYSTERY2 = currentGuess;
				}
				if (currentGuess == wordTWO[3]) {
					wordMYSTERY3 = currentGuess;
				}
				if (currentGuess == wordTWO[4]) {
					wordMYSTERY4 = currentGuess;
				}
				if (currentGuess == wordTWO[5]) {
					wordMYSTERY5 = currentGuess;
				}
				if (currentGuess == wordTWO[6]) {
					wordMYSTERY6 = currentGuess;
				}
				if (currentGuess == wordTWO[7]) {
					wordMYSTERY7 = currentGuess;
				}
				if (currentGuess == wordTWO[8]) {
					wordMYSTERY8 = currentGuess;
				}
				if (currentGuess == wordTWO[9]) {
					wordMYSTERY9 = currentGuess;
				}

			}

			if (caseONE == 2) {
				if (currentGuess == wordTHREE[0]) {
					wordMYSTERY0 = currentGuess;
				}
				if (currentGuess == wordTHREE[1]) {
					wordMYSTERY1 = currentGuess;
				}
				if (currentGuess == wordTHREE[2]) {
					wordMYSTERY2 = currentGuess;
				}
				if (currentGuess == wordTHREE[3]) {
					wordMYSTERY3 = currentGuess;
				}
				if (currentGuess == wordTHREE[4]) {
					wordMYSTERY4 = currentGuess;
				}
				if (currentGuess == wordTHREE[5]) {
					wordMYSTERY5 = currentGuess;
				}
				if (currentGuess == wordTHREE[6]) {
					wordMYSTERY6 = currentGuess;
				}
				if (currentGuess == wordTHREE[7]) {
					wordMYSTERY7 = currentGuess;
				}
				if (currentGuess == wordTHREE[8]) {
					wordMYSTERY8 = currentGuess;
				}
				if (currentGuess == wordTHREE[9]) {
					wordMYSTERY9 = currentGuess;
				}

			}

			if (caseONE == 3) {
				if (currentGuess == wordFOUR[0]) {
					wordMYSTERY0 = currentGuess;
				}
				if (currentGuess == wordFOUR[1]) {
					wordMYSTERY1 = currentGuess;
				}
				if (currentGuess == wordFOUR[2]) {
					wordMYSTERY2 = currentGuess;
				}
				if (currentGuess == wordFOUR[3]) {
					wordMYSTERY3 = currentGuess;
				}
				if (currentGuess == wordFOUR[4]) {
					wordMYSTERY4 = currentGuess;
				}
				if (currentGuess == wordFOUR[5]) {
					wordMYSTERY5 = currentGuess;
				}
				if (currentGuess == wordFOUR[6]) {
					wordMYSTERY6 = currentGuess;
				}
				if (currentGuess == wordFOUR[7]) {
					wordMYSTERY7 = currentGuess;
				}
				if (currentGuess == wordFOUR[8]) {
					wordMYSTERY8 = currentGuess;
				}
				if (currentGuess == wordFOUR[9]) {
					wordMYSTERY9 = currentGuess;
				}

			}

			if (caseONE == 4) {
				if (currentGuess == wordFIVE[0]) {
					wordMYSTERY0 = currentGuess;
				}
				if (currentGuess == wordFIVE[1]) {
					wordMYSTERY1 = currentGuess;
				}
				if (currentGuess == wordFIVE[2]) {
					wordMYSTERY2 = currentGuess;
				}
				if (currentGuess == wordFIVE[3]) {
					wordMYSTERY3 = currentGuess;
				}
				if (currentGuess == wordFIVE[4]) {
					wordMYSTERY4 = currentGuess;
				}
				if (currentGuess == wordFIVE[5]) {
					wordMYSTERY5 = currentGuess;
				}
				if (currentGuess == wordFIVE[6]) {
					wordMYSTERY6 = currentGuess;
				}
				if (currentGuess == wordFIVE[7]) {
					wordMYSTERY7 = currentGuess;
				}
				if (currentGuess == wordFIVE[8]) {
					wordMYSTERY8 = currentGuess;
				}
				if (currentGuess == wordFIVE[9]) {
					wordMYSTERY9 = currentGuess;
				}

			}

			if (caseONE == 5) {
				if (currentGuess == wordSIX[0]) {
					wordMYSTERY0 = currentGuess;
				}
				if (currentGuess == wordSIX[1]) {
					wordMYSTERY1 = currentGuess;
				}
				if (currentGuess == wordSIX[2]) {
					wordMYSTERY2 = currentGuess;
				}
				if (currentGuess == wordSIX[3]) {
					wordMYSTERY3 = currentGuess;
				}
				if (currentGuess == wordSIX[4]) {
					wordMYSTERY4 = currentGuess;
				}
				if (currentGuess == wordSIX[5]) {
					wordMYSTERY5 = currentGuess;
				}
				if (currentGuess == wordSIX[6]) {
					wordMYSTERY6 = currentGuess;
				}
				if (currentGuess == wordSIX[7]) {
					wordMYSTERY7 = currentGuess;
				}
				if (currentGuess == wordSIX[8]) {
					wordMYSTERY8 = currentGuess;
				}
				if (currentGuess == wordSIX[9]) {
					wordMYSTERY9 = currentGuess;
				}

			}

			if (caseONE == 6) {
				if (currentGuess == wordSEVEN[0]) {
					wordMYSTERY0 = currentGuess;
				}
				if (currentGuess == wordSEVEN[1]) {
					wordMYSTERY1 = currentGuess;
				}
				if (currentGuess == wordSEVEN[2]) {
					wordMYSTERY2 = currentGuess;
				}
				if (currentGuess == wordSEVEN[3]) {
					wordMYSTERY3 = currentGuess;
				}
				if (currentGuess == wordSEVEN[4]) {
					wordMYSTERY4 = currentGuess;
				}
				if (currentGuess == wordSEVEN[5]) {
					wordMYSTERY5 = currentGuess;
				}
				if (currentGuess == wordSEVEN[6]) {
					wordMYSTERY6 = currentGuess;
				}
				if (currentGuess == wordSEVEN[7]) {
					wordMYSTERY7 = currentGuess;
				}
				if (currentGuess == wordSEVEN[8]) {
					wordMYSTERY8 = currentGuess;
				}
				if (currentGuess == wordSEVEN[9]) {
					wordMYSTERY9 = currentGuess;
				}

			}

			if (caseONE == 7) {
				if (currentGuess == wordEIGHT[0]) {
					wordMYSTERY0 = currentGuess;
				}
				if (currentGuess == wordEIGHT[1]) {
					wordMYSTERY1 = currentGuess;
				}
				if (currentGuess == wordEIGHT[2]) {
					wordMYSTERY2 = currentGuess;
				}
				if (currentGuess == wordEIGHT[3]) {
					wordMYSTERY3 = currentGuess;
				}
				if (currentGuess == wordEIGHT[4]) {
					wordMYSTERY4 = currentGuess;
				}
				if (currentGuess == wordEIGHT[5]) {
					wordMYSTERY5 = currentGuess;
				}
				if (currentGuess == wordEIGHT[6]) {
					wordMYSTERY6 = currentGuess;
				}
				if (currentGuess == wordEIGHT[7]) {
					wordMYSTERY7 = currentGuess;
				}
				if (currentGuess == wordEIGHT[8]) {
					wordMYSTERY8 = currentGuess;
				}
				if (currentGuess == wordEIGHT[9]) {
					wordMYSTERY9 = currentGuess;
				}

			}

			if (caseONE == 8) {
				if (currentGuess == wordNINE[0]) {
					wordMYSTERY0 = currentGuess;
				}
				if (currentGuess == wordNINE[1]) {
					wordMYSTERY1 = currentGuess;
				}
				if (currentGuess == wordNINE[2]) {
					wordMYSTERY2 = currentGuess;
				}
				if (currentGuess == wordNINE[3]) {
					wordMYSTERY3 = currentGuess;
				}
				if (currentGuess == wordNINE[4]) {
					wordMYSTERY4 = currentGuess;
				}
				if (currentGuess == wordNINE[5]) {
					wordMYSTERY5 = currentGuess;
				}
				if (currentGuess == wordNINE[6]) {
					wordMYSTERY6 = currentGuess;
				}
				if (currentGuess == wordNINE[7]) {
					wordMYSTERY7 = currentGuess;
				}
				if (currentGuess == wordNINE[8]) {
					wordMYSTERY8 = currentGuess;
				}
				if (currentGuess == wordNINE[9]) {
					wordMYSTERY9 = currentGuess;
				}

			}

			if (caseONE == 9) {
				if (currentGuess == wordTEN[0]) {
					wordMYSTERY0 = currentGuess;
				}
				if (currentGuess == wordTEN[1]) {
					wordMYSTERY1 = currentGuess;
				}
				if (currentGuess == wordTEN[2]) {
					wordMYSTERY2 = currentGuess;
				}
				if (currentGuess == wordTEN[3]) {
					wordMYSTERY3 = currentGuess;
				}
				if (currentGuess == wordTEN[4]) {
					wordMYSTERY4 = currentGuess;
				}
				if (currentGuess == wordTEN[5]) {
					wordMYSTERY5 = currentGuess;
				}
				if (currentGuess == wordTEN[6]) {
					wordMYSTERY6 = currentGuess;
				}
				if (currentGuess == wordTEN[7]) {
					wordMYSTERY7 = currentGuess;
				}
				if (currentGuess == wordTEN[8]) {
					wordMYSTERY8 = currentGuess;
				}
				if (currentGuess == wordTEN[9]) {
					wordMYSTERY9 = currentGuess;
				}

			}

			if (currentGuess != wordMYSTERY0 && currentGuess != wordMYSTERY1 && currentGuess != wordMYSTERY2 && currentGuess != wordMYSTERY3 && currentGuess != wordMYSTERY4 && currentGuess != wordMYSTERY5 && currentGuess != wordMYSTERY6 && currentGuess != wordMYSTERY7 && currentGuess != wordMYSTERY8 && currentGuess != wordMYSTERY9)
			{
				cout << "This letter was incorrect." << endl;
				incorrectGuess = incorrectGuess - 1;
			}

			system("pause");




			// win condition 
			if (wordMYSTERY0 != "_" && wordMYSTERY1 != "_" && wordMYSTERY2 != "_" && wordMYSTERY3 != "_" && wordMYSTERY4 != "_" && wordMYSTERY5 != "_" && wordMYSTERY6 != "_" && wordMYSTERY7 != "_" && wordMYSTERY8 != "_" && wordMYSTERY9 != "_")
			{
				cout << "YOU HAVE BEAT THE CASE FILE" << endl;
				system("pause");
				cout << "if you would like to move onto a new case file, type YES" << endl;
				cin >> continueGame;

				if (continueGame == "YES") {
					caseFile = caseFile + 1;
				}
				else {
					caseFile = 0;
				}


				// option to try a new casefile
			}

		}
		// lose condition
		if (incorrectGuess == 0)
		{
			cout << "You are unfit to serve." << endl;
			system("pause");
			caseFile = 0;
		}


	}




	//CASE 3

	while (caseFile == 3) {

		int incorrectGuess = 6;

	 wordMYSTERY0 == "_";
	 wordMYSTERY1 == "_";
	 wordMYSTERY2 == "_";
	 wordMYSTERY3 == "_";
	 wordMYSTERY4 == "_";
	 wordMYSTERY5 == "_";
	 wordMYSTERY6 == "_";
	 wordMYSTERY7 == "_";
	 wordMYSTERY8 == "_";
	 wordMYSTERY9 == "_";


		while (incorrectGuess != 0) { // funcitons in reverse order
			// While recruit hasn’t made too many incorrect guesses and hasn’t guessed the secret word
			cout << "Simulation: " << caseFile << endl;
			cout << endl;
			cout << endl;
			//     Tell recruit how many incorrect guesses he or she has left
			cout << agentName << ", you have " << incorrectGuess << " incorrect guesses you can still make." << endl;
			//     Show recruit the letters he or she has guessed
			cout << "Previous Guesses: " << endl;
			for (int i = 0; i < guessedLetters.size(); i++)
				cout << guessedLetters.at(i) << ' ';



			//     Show player how much of the secret word he or she has guessed
			cout << endl;
			cout << endl;
			//cout << codeWords[caseONE] << endl;
			cout << wordMYSTERY0 << wordMYSTERY1 << wordMYSTERY2 << wordMYSTERY3 << wordMYSTERY4 << wordMYSTERY5 << wordMYSTERY6 << wordMYSTERY7 << wordMYSTERY8 << wordMYSTERY9 << endl;

			//     Get recruit's next guess
			cout << "place your next guess" << endl;

			//     While recruit has entered a letter that he or she has already guessed
			cin >> currentGuess;
			guessedLetters.push_back(currentGuess);


			if (caseONE == 0) {
				if (currentGuess == wordONE[0]) {
					wordMYSTERY0 = currentGuess;
				}
				if (currentGuess == wordONE[1]) {
					wordMYSTERY1 = currentGuess;
				}
				if (currentGuess == wordONE[2]) {
					wordMYSTERY2 = currentGuess;
				}
				if (currentGuess == wordONE[3]) {
					wordMYSTERY3 = currentGuess;
				}
				if (currentGuess == wordONE[4]) {
					wordMYSTERY4 = currentGuess;
				}
				if (currentGuess == wordONE[5]) {
					wordMYSTERY5 = currentGuess;
				}
				if (currentGuess == wordONE[6]) {
					wordMYSTERY6 = currentGuess;
				}
				if (currentGuess == wordONE[7]) {
					wordMYSTERY7 = currentGuess;
				}
				if (currentGuess == wordONE[8]) {
					wordMYSTERY8 = currentGuess;
				}
				if (currentGuess == wordONE[9]) {
					wordMYSTERY9 = currentGuess;
				}


			}

			if (caseONE == 1) {
				if (currentGuess == wordTWO[0]) {
					wordMYSTERY0 = currentGuess;
				}
				if (currentGuess == wordTWO[1]) {
					wordMYSTERY1 = currentGuess;
				}
				if (currentGuess == wordTWO[2]) {
					wordMYSTERY2 = currentGuess;
				}
				if (currentGuess == wordTWO[3]) {
					wordMYSTERY3 = currentGuess;
				}
				if (currentGuess == wordTWO[4]) {
					wordMYSTERY4 = currentGuess;
				}
				if (currentGuess == wordTWO[5]) {
					wordMYSTERY5 = currentGuess;
				}
				if (currentGuess == wordTWO[6]) {
					wordMYSTERY6 = currentGuess;
				}
				if (currentGuess == wordTWO[7]) {
					wordMYSTERY7 = currentGuess;
				}
				if (currentGuess == wordTWO[8]) {
					wordMYSTERY8 = currentGuess;
				}
				if (currentGuess == wordTWO[9]) {
					wordMYSTERY9 = currentGuess;
				}

			}

			if (caseONE == 2) {
				if (currentGuess == wordTHREE[0]) {
					wordMYSTERY0 = currentGuess;
				}
				if (currentGuess == wordTHREE[1]) {
					wordMYSTERY1 = currentGuess;
				}
				if (currentGuess == wordTHREE[2]) {
					wordMYSTERY2 = currentGuess;
				}
				if (currentGuess == wordTHREE[3]) {
					wordMYSTERY3 = currentGuess;
				}
				if (currentGuess == wordTHREE[4]) {
					wordMYSTERY4 = currentGuess;
				}
				if (currentGuess == wordTHREE[5]) {
					wordMYSTERY5 = currentGuess;
				}
				if (currentGuess == wordTHREE[6]) {
					wordMYSTERY6 = currentGuess;
				}
				if (currentGuess == wordTHREE[7]) {
					wordMYSTERY7 = currentGuess;
				}
				if (currentGuess == wordTHREE[8]) {
					wordMYSTERY8 = currentGuess;
				}
				if (currentGuess == wordTHREE[9]) {
					wordMYSTERY9 = currentGuess;
				}

			}

			if (caseONE == 3) {
				if (currentGuess == wordFOUR[0]) {
					wordMYSTERY0 = currentGuess;
				}
				if (currentGuess == wordFOUR[1]) {
					wordMYSTERY1 = currentGuess;
				}
				if (currentGuess == wordFOUR[2]) {
					wordMYSTERY2 = currentGuess;
				}
				if (currentGuess == wordFOUR[3]) {
					wordMYSTERY3 = currentGuess;
				}
				if (currentGuess == wordFOUR[4]) {
					wordMYSTERY4 = currentGuess;
				}
				if (currentGuess == wordFOUR[5]) {
					wordMYSTERY5 = currentGuess;
				}
				if (currentGuess == wordFOUR[6]) {
					wordMYSTERY6 = currentGuess;
				}
				if (currentGuess == wordFOUR[7]) {
					wordMYSTERY7 = currentGuess;
				}
				if (currentGuess == wordFOUR[8]) {
					wordMYSTERY8 = currentGuess;
				}
				if (currentGuess == wordFOUR[9]) {
					wordMYSTERY9 = currentGuess;
				}

			}

			if (caseONE == 4) {
				if (currentGuess == wordFIVE[0]) {
					wordMYSTERY0 = currentGuess;
				}
				if (currentGuess == wordFIVE[1]) {
					wordMYSTERY1 = currentGuess;
				}
				if (currentGuess == wordFIVE[2]) {
					wordMYSTERY2 = currentGuess;
				}
				if (currentGuess == wordFIVE[3]) {
					wordMYSTERY3 = currentGuess;
				}
				if (currentGuess == wordFIVE[4]) {
					wordMYSTERY4 = currentGuess;
				}
				if (currentGuess == wordFIVE[5]) {
					wordMYSTERY5 = currentGuess;
				}
				if (currentGuess == wordFIVE[6]) {
					wordMYSTERY6 = currentGuess;
				}
				if (currentGuess == wordFIVE[7]) {
					wordMYSTERY7 = currentGuess;
				}
				if (currentGuess == wordFIVE[8]) {
					wordMYSTERY8 = currentGuess;
				}
				if (currentGuess == wordFIVE[9]) {
					wordMYSTERY9 = currentGuess;
				}

			}

			if (caseONE == 5) {
				if (currentGuess == wordSIX[0]) {
					wordMYSTERY0 = currentGuess;
				}
				if (currentGuess == wordSIX[1]) {
					wordMYSTERY1 = currentGuess;
				}
				if (currentGuess == wordSIX[2]) {
					wordMYSTERY2 = currentGuess;
				}
				if (currentGuess == wordSIX[3]) {
					wordMYSTERY3 = currentGuess;
				}
				if (currentGuess == wordSIX[4]) {
					wordMYSTERY4 = currentGuess;
				}
				if (currentGuess == wordSIX[5]) {
					wordMYSTERY5 = currentGuess;
				}
				if (currentGuess == wordSIX[6]) {
					wordMYSTERY6 = currentGuess;
				}
				if (currentGuess == wordSIX[7]) {
					wordMYSTERY7 = currentGuess;
				}
				if (currentGuess == wordSIX[8]) {
					wordMYSTERY8 = currentGuess;
				}
				if (currentGuess == wordSIX[9]) {
					wordMYSTERY9 = currentGuess;
				}

			}

			if (caseONE == 6) {
				if (currentGuess == wordSEVEN[0]) {
					wordMYSTERY0 = currentGuess;
				}
				if (currentGuess == wordSEVEN[1]) {
					wordMYSTERY1 = currentGuess;
				}
				if (currentGuess == wordSEVEN[2]) {
					wordMYSTERY2 = currentGuess;
				}
				if (currentGuess == wordSEVEN[3]) {
					wordMYSTERY3 = currentGuess;
				}
				if (currentGuess == wordSEVEN[4]) {
					wordMYSTERY4 = currentGuess;
				}
				if (currentGuess == wordSEVEN[5]) {
					wordMYSTERY5 = currentGuess;
				}
				if (currentGuess == wordSEVEN[6]) {
					wordMYSTERY6 = currentGuess;
				}
				if (currentGuess == wordSEVEN[7]) {
					wordMYSTERY7 = currentGuess;
				}
				if (currentGuess == wordSEVEN[8]) {
					wordMYSTERY8 = currentGuess;
				}
				if (currentGuess == wordSEVEN[9]) {
					wordMYSTERY9 = currentGuess;
				}

			}

			if (caseONE == 7) {
				if (currentGuess == wordEIGHT[0]) {
					wordMYSTERY0 = currentGuess;
				}
				if (currentGuess == wordEIGHT[1]) {
					wordMYSTERY1 = currentGuess;
				}
				if (currentGuess == wordEIGHT[2]) {
					wordMYSTERY2 = currentGuess;
				}
				if (currentGuess == wordEIGHT[3]) {
					wordMYSTERY3 = currentGuess;
				}
				if (currentGuess == wordEIGHT[4]) {
					wordMYSTERY4 = currentGuess;
				}
				if (currentGuess == wordEIGHT[5]) {
					wordMYSTERY5 = currentGuess;
				}
				if (currentGuess == wordEIGHT[6]) {
					wordMYSTERY6 = currentGuess;
				}
				if (currentGuess == wordEIGHT[7]) {
					wordMYSTERY7 = currentGuess;
				}
				if (currentGuess == wordEIGHT[8]) {
					wordMYSTERY8 = currentGuess;
				}
				if (currentGuess == wordEIGHT[9]) {
					wordMYSTERY9 = currentGuess;
				}

			}

			if (caseONE == 8) {
				if (currentGuess == wordNINE[0]) {
					wordMYSTERY0 = currentGuess;
				}
				if (currentGuess == wordNINE[1]) {
					wordMYSTERY1 = currentGuess;
				}
				if (currentGuess == wordNINE[2]) {
					wordMYSTERY2 = currentGuess;
				}
				if (currentGuess == wordNINE[3]) {
					wordMYSTERY3 = currentGuess;
				}
				if (currentGuess == wordNINE[4]) {
					wordMYSTERY4 = currentGuess;
				}
				if (currentGuess == wordNINE[5]) {
					wordMYSTERY5 = currentGuess;
				}
				if (currentGuess == wordNINE[6]) {
					wordMYSTERY6 = currentGuess;
				}
				if (currentGuess == wordNINE[7]) {
					wordMYSTERY7 = currentGuess;
				}
				if (currentGuess == wordNINE[8]) {
					wordMYSTERY8 = currentGuess;
				}
				if (currentGuess == wordNINE[9]) {
					wordMYSTERY9 = currentGuess;
				}

			}

			if (caseONE == 9) {
				if (currentGuess == wordTEN[0]) {
					wordMYSTERY0 = currentGuess;
				}
				if (currentGuess == wordTEN[1]) {
					wordMYSTERY1 = currentGuess;
				}
				if (currentGuess == wordTEN[2]) {
					wordMYSTERY2 = currentGuess;
				}
				if (currentGuess == wordTEN[3]) {
					wordMYSTERY3 = currentGuess;
				}
				if (currentGuess == wordTEN[4]) {
					wordMYSTERY4 = currentGuess;
				}
				if (currentGuess == wordTEN[5]) {
					wordMYSTERY5 = currentGuess;
				}
				if (currentGuess == wordTEN[6]) {
					wordMYSTERY6 = currentGuess;
				}
				if (currentGuess == wordTEN[7]) {
					wordMYSTERY7 = currentGuess;
				}
				if (currentGuess == wordTEN[8]) {
					wordMYSTERY8 = currentGuess;
				}
				if (currentGuess == wordTEN[9]) {
					wordMYSTERY9 = currentGuess;
				}

			}

			if (currentGuess != wordMYSTERY0 && currentGuess != wordMYSTERY1 && currentGuess != wordMYSTERY2 && currentGuess != wordMYSTERY3 && currentGuess != wordMYSTERY4 && currentGuess != wordMYSTERY5 && currentGuess != wordMYSTERY6 && currentGuess != wordMYSTERY7 && currentGuess != wordMYSTERY8 && currentGuess != wordMYSTERY9)
			{
				cout << "This letter was incorrect." << endl;
				incorrectGuess = incorrectGuess - 1;
			}

			system("pause");




			// win condition 
			if (wordMYSTERY0 != "_" && wordMYSTERY1 != "_" && wordMYSTERY2 != "_" && wordMYSTERY3 != "_" && wordMYSTERY4 != "_" && wordMYSTERY5 != "_" && wordMYSTERY6 != "_" && wordMYSTERY7 != "_" && wordMYSTERY8 != "_" && wordMYSTERY9 != "_")
			{
				cout << "YOU HAVE BEAT THE CASE FILE" << endl;
				system("pause");
				cout << "if you would like to move onto a new case file, type YES" << endl;
				cin >> continueGame;

				if (continueGame == "YES") {
					caseFile = caseFile + 1;
				}
				else {
					caseFile = 0;
				}


				// option to try a new casefile
			}

		}
		// lose condition
		if (incorrectGuess == 0)
		{
			cout << "You are unfit to serve." << endl;
			system("pause");
			caseFile = 0;
		}


	}


	cout << "Goodbye. We will be watching, always watching." << endl;

}
