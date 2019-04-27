#pragma once
class Board {
public:

private:
	class cell {
	public:
		int getNeighbors();
		void getPopulated();
		bool CheckPopulation() { return isPopulated; }
	private:
		bool isPopulated;
	};
};