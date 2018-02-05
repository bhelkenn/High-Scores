/**
	@file	HighScoreDatabase.cpp
	implementation file for the HighScoreDatabase class
	@author	Brady Helkenn
	@date	11/10/2014
*/

/**
	default constructor
*/
HighScoreDatabase::HighScoreDatabase() {}

/**
	creates a new HighScore object and saves in the highScores array
*/
void HighScoreDatabase::createCategory() {
	cout << "Please enter a name for your score category: ";
	string name;
	getline(cin, name);
	//starting from an empty array
	if (size == 0)
		highScores = new HighScore[1];
	//assuming the database is not empty
	else {
		//creates temp array of same size as database
		HighScore* temp = new HighScore[size];
		//populates temp array with objects from database
		for (int i = 0; i < size; i++) {
			temp[i] = highScores[i];
		}
		//resizes database to new size
		highScores = new HighScore[size + 1];
		//restores objects to database
		for (int i = 0; i < size; i++) {
			highScores[i] = temp[i];
		}
		//delete and clean up temp array
		delete [] temp;
		temp = nullptr;
	}
	//increments size variable
	size++;
	//creates the new HighScore object in the last index of the database
	highScores[size - 1] = HighScore(name);
}