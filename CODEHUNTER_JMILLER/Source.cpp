// CodeHunter.cpp : Defines the entry point for the console application.
//

//#include "pch.h" // This line only needed for console C++ project, omit this for Empty C++ Project.
#include <iostream> // allows input and output
#include <string> // allows usage of strings

using namespace std; // removes need to type std:: so many times


int main()
{
	string textToAnalyze; // stores user input
	// int foo = 0;  never used
	int vowels = 0; // stores number of vowels in user input
	int consonants = 0; // stores number of consonants in user input
	int digits = 0; // stores number of digits in user input
	int spaces = 0; // stores number of spaces in user input
	int lengthOfStringSubmittedForAnalysis = 0; //stores the number of characters in user input
	int unknownCharacters = 0; // stores number of unknown characters in user input(punctuation)
	int checkSum = 0; // combined total of identified characters
	//int bar = 0;  never used

	cout << "Welcome to the CIA code Hunter Program!" << endl; //text to console
	cout << "Please type in text to analyze: " << endl;//text to console
	getline(cin, textToAnalyze);

	for (int i = 0; i < textToAnalyze.length(); ++i)
	{
		if (textToAnalyze[i] == 'a' || textToAnalyze[i] == 'e' || textToAnalyze[i] == 'i' ||    // runs if there are any vowels in text
			textToAnalyze[i] == 'o' || textToAnalyze[i] == 'u' || textToAnalyze[i] == 'A' ||
			textToAnalyze[i] == 'E' || textToAnalyze[i] == 'I' || textToAnalyze[i] == 'O' ||
			textToAnalyze[i] == 'U')
		{
			++vowels; //increments vowel counter
		}
		else if ((textToAnalyze[i] >= 'a'&& textToAnalyze[i] <= 'z') || (textToAnalyze[i] >= 'A'&& textToAnalyze[i] <= 'Z')) // runs if there are alphabetic characters that aren't vowels
		{
			++consonants; //increments consonant counter
		}
		else if (textToAnalyze[i] >= '0' && textToAnalyze[i] <= '9') // runs if there is a number 
		{
			++digits; //increments digit counter
		}
		else if (textToAnalyze[i] == ' ') // runs if there is a space
		{
			++spaces; //increments space counter
		}
		else // runs if there is something that isnt any of the above (punctuation)
		{
			++unknownCharacters; //increments vowel counter
		}
	}

	lengthOfStringSubmittedForAnalysis = textToAnalyze.length(); // gets and saves the string's length
	checkSum = unknownCharacters + vowels + consonants + digits + spaces; // combines the total number of detected characters

	cout << "Vowels: " << vowels << endl; //text to console with variables
	cout << "Consonants: " << consonants << endl; //text to console with variables
	cout << "Digits: " << digits << endl; //text to console with variables
	cout << "White spaces: " << spaces << endl; //text to console with variables
	cout << "Length of string submitted for analysis: " << lengthOfStringSubmittedForAnalysis << endl; //text to console with variables
	cout << "Number of characters CodeHunter could not identify: " << unknownCharacters << endl; //text to console with variables
	cout << "Checksum: " << checkSum << endl; //text to console with variables

	if (checkSum == lengthOfStringSubmittedForAnalysis) // runs if the two values are equal
	{
		cout << "This program self checking has found this Analysis to be valid." << endl;//text to console
	}
	else // runs if the two values are not equal
	{
		cout << "WARNING! *** This program self checking has found this Analysis to be invalid! Do not use this data!" << endl;//text to console
	}

	system("pause"); // pauses program till a keystroke is detected

	return 0; // returns zero
}