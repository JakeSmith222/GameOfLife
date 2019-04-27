#pragma once

class Cell {
public:
	int getNearbyInfo();
	void populate();
	bool CheckPopulation() { return isPopulated; }
private:
	bool isPopulated;
	int populatedCellsNearby;
};

class Board {
public:
	Board();
	Board(int x, int y);
private:
	Cell boardArray[5][5];
};