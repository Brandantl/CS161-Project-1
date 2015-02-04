//This is the Nicks Crystal Ball program (CS Assignment 161 #1.cpp)
//Written By: Brandan Tyler Lasley
//Project: CS 162 ASSIGNMENT #1, Nicks Crystal Ball 
//Date: 27 September 2013 05:30
//Sources: None
//This allows a user to input information into a variable and then return that information back to the user in a friendly sentence.

#include <iostream>
#include <string>
using namespace std;

int main() {
	// Declare the variables name and subject for storage. 
	string name;
	string subject;

	// Output a welcome message to the usr.
	cout << "Welcome to Brandan's Crystal Ball!";
	cout << endl;

	// Ask the usr a question, its name.
	cout << "What is your name, please? ";

	// Ask for an input and store that input in the [string] variable 'name'. 
	cin >> name;

	// Print out a greetings including the name that was just recently harvested from the usr.
	cout << "Hello, " << name << ". My name is Brandan";
	cout << endl;

	// Ask the usr what subject they're studying, expecting reply.
	cout << "What subject are you studying? ";

	// Collect the input and store into the [string] variable 'subject'
	cin >> subject;

	// Give a prediction of the usrs future including the name and the subject variables.
	cout << "Well, " << name << ", Brandan's crystal ball says you will do very well in " 
		<< subject << " this term." << endl << "Good luck!" << endl;


	// pause 
	getchar();
	getchar();

	// exit
	return 0;
}