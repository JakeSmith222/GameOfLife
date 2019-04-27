#pragma once
class Board {
public:

private:
	class cell {
	public:
		int getNearbyInfo();
		void populate();
		bool CheckPopulation() { return isPopulated; }
	private:
		bool isPopulated;
		int populatedCellsNearby;
	};
};