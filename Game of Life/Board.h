#pragma once

class Cell {
public:
	Cell();
	int getNearbyInfo();
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
private:
	Cell **boardArray;
};