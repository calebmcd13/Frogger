#pragma once
#ifndef FROG_H
#define FROG_H

#include "Game.h"
#include "Vehicle.h"


class Frog {

private:
	sf::RectangleShape *shape;

public:

	Frog();

	sf::RectangleShape* getShape();
	void moveLeft();
	void moveRight();
	void moveUp();
	void moveDown();

};


#endif