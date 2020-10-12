#pragma once

#include <map>
#include <vector>

class MontyHall
{
	private :
		const int nbDoors;
		
		std::map<int, bool> doors;
		int chosenDoor;
	public :
		MontyHall(int initNbDoors);
		void generate();
		void setPick(int pick);
		int getGoatDoor();
		int getCarDoor();
};