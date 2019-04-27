#include "pch.h"
#include "Board.h"

Board::Board(int x, int y) {
	boardArray = new Cell*[x];
	for (int i = 0; i < x; i++) {
		boardArray[i] = new Cell[y];
	}
}
Board::Board() {
	boardArray = new Cell*[5];
	for (int i = 0; i < 5; i++) {
		boardArray[i] = new Cell[5];
	}
}

Cell::Cell() {
	isPopulated = false;
	populatedCellsNearby = 0;
}