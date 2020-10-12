#pragma once

class Player
{
	private :
		int nbWin;
		int nbGame;
		int chosenDoor;
	public :
		Player();
		float getWinrate();
		void addWin();
		void addGame();
		void setChosenDoor(int newChosenDoor);
		int getChosenDoor();
};