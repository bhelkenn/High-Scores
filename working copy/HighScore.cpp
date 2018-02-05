/**
	@file	HighScore.cpp
	implementation file for the HighScore class
	@author	Brady Helkenn
	@date	11/10/2014
*/

//CONSTRUCTORS
/**
	default constructor for bulk operations
*/
HighScore::HighScore() {}
/**
	constructor that populates the object's name
	@param	inputName = user input name to associate with name
*/
HighScore::HighScore(string inputName) {
	name = inputName;
	size = 0;
}
//END CONSTRUCTORS

/**
	adds a score entry to the scores array
	@param	inputScore = score to add to scores array
*/
void HighScore::addScore(int inputScore) {
	//starting from an empty array
	if (size == 0)
		scores = new int[1];
	//assuming scores array contains values
	else {
		//creates temp array of same size as scores array
		int* temp = new int[size];
		//populates temp array with values from scores array
		for (int i = 0; i < size; i++) {
			temp[i] = scores[i];
		}
		//resizes scores array to new size
		scores = new int[size + 1];
		//restores values to scores array
		for (int i = 0; i < size; i++) {
			scores[i] = temp[i];
		}
		//delete and clean up temp array
		delete [] temp;
		temp = nullptr;
	}
	//increments size variable
	size++;
	//assigns inputScore to the last (empty) item in scores array
	scores[size - 1] = inputScore;
}