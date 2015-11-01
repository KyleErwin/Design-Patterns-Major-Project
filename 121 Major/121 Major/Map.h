#ifndef MAP_H
#define MAP_H

class Map
{
	private:
		char** MapContents;
		char* FileLocation;
		void SetMap();
		int mapSizeX;
		int mapSizeY;
	public:
		Map() {};
		~Map();
		Map(char*);
		void printMap();

		bool availableSpace(int, int);
		bool Move(int, int, int, int);
		void setMap();

		void addUnit(char, int, int);

		//@CHANGED
		unsigned int getY() { return mapSizeY; };
		unsigned int getX() { return mapSizeX; };
		char getSpace(int x, int y) { return MapContents[x][y]; };

};
#endif
