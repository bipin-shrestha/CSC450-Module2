/*
Name: 				Bipin Shrestha
Project Name: 		CSC450-CT1-Module2
Project Purpose: 	To create a interactive program that takes two input from user three times for varying string lengths and
					print the resulting output to the screen.
Algorithm Used: 	Program has simple getline function to obtain the user information, stores in the variables,
					using loop to iterate three times and take input and concatenate two strings with '+' operators and
					then prints the information using the 'cout' statements.
Program Inputs: 	Program require user input like FirstItem, and LastItem to concatenate which repeats three times.
Program Outputs: 	Program outputs the concatenated strings of inputs provided by users after each input iterations.
Program Limitations: It cannot handle extremely long strings. If concatenated string is too long, it may cause buffer overflow.
Program Errors: 	The program will encounter error if the user inputs is extremely long, it won't be displayed in the console.

====================================
*/
#include <iostream>
#include <string>

using namespace std;

int main(){
	string firstInput, secondInput;
	//Loop for three Iterations
	for(int i=0; i<3; i++){
		// Prompt for the first user input
		cout << "Enter the first string : ";
		getline(cin, firstInput);
		// Prompt for the second user input
		cout << "Enter the second string : ";
		getline(cin, secondInput);
		// Concatenate two strings
		string concatenatedOutput = firstInput + secondInput;
		// Print the concatenated result
		cout << "New concatenated string : " << concatenatedOutput << endl;
	}
	return 0;
}
