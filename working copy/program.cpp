/**
	@file	program.cpp
	main program file for the High Scores program
	@author	Brady Helkenn
	@date	11/10/2014
*/
#include<iostream>
#include"getChar.h"
#include"HighScoreDatabase.h"
#include"Pause.h"
#include"Clear.h"
using namespace std;

int main() {
	cout << "Welcome to the High Scores tracking program!" << endl << endl;
	Pause();
	HighScoreDatabase database;
	char choice = '0';
	while (!(choice == 'Q' || choice == 'q')) {
		Clear();
		cout << "Please choose an option below:" << endl;
		cout << "1. View existing high scores in all categories" << endl;
		cout << "2. Input a new score" << endl;
		cout << "3. Create a new category of scores" << endl;
		cout << "(S)ave the database" << endl;
		cout << "(Q)uit the program" << endl;
		
		choice = getChar();
		switch (choice) {
			case '1':
				break;
			case '2':
				break;
			case '3':
				database.createCategory();
				break;
			case 'S':
			case 's':
				break;
			default:
				break;
		}
	}
	return 0;
}