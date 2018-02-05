/**
	@file	HighScoreDatabase.h
	header file for the HighScoreDatabase class
	@author	Brady Helkenn
	@date	11/10/2014
*/
#include"HighScore.h"
#ifndef HIGHSCOREDATABASE_H
#define HIGHSCOREDATABASE_H

/**
	@param	highScores = array of HighScore objects
	@param	size = size of highScores array
*/
class HighScoreDatabase {
private:
	HighScore* highScores;
	int size;
public:
	HighScoreDatabase();
	void createCategory();
};

#endif