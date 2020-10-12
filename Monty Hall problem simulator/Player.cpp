#include "Player.hpp"

Player::Player()
{
	nbGame = 0;
	nbWin = 0;
}

float Player::getWinrate()
{
	return (float)nbWin / nbGame;
}

void Player::addGame()
{
	nbGame++;
}

void Player::addWin()
{
	nbWin++;
}

void Player::setChosenDoor(int newChosenDoor)
{
	chosenDoor = newChosenDoor;
}

int Player::getChosenDoor()
{
	return chosenDoor;
}