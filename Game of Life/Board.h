#pragma once

class Cell {
public:
	Cell();
	int getNearbyInfo();
	bool checkPopulated() { return isPopulated; } //returns true when populated
	void populate();
	bool checkSolitude();
	bool checkOverpopulation();
	bool checkSurvive();


private:
	bool isPopulated;
	int populatedCellsNearby;
};

class Board {
public:
	Board();
	Board(int x, int y);
	void clearScreen();
	void clearBoard();
	bool isEmpty();	
	int getRows();
	int getCols();
private:
	Cell **boardArray;
};