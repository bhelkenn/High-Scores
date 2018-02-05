/**
	@file	HighScore.h
	header file for the HighScore class
	@author	Brady Helkenn
	@date	11/10/2014
*/

#ifndef HIGHSCORE_H
#define HIGHSCORE_H

/**
	@param	name = string data type containing the friendly name for organizing high scores
	@param	scores = pointer array of int data types to record input scores
	@param	max = int data type to store top score out of scores array
	@param	size = size of scores array, of int data type
*/
class HighScore {
private:
	string name;
	int* scores;
	int max;
	int size;
public:
	HighScore();
	HighScore(string);
	void addScore(int);
};

#endif