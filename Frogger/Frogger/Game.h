#ifndef GAME_H
#define GAME_H

#include "Vehicle.h"
#include "Arena.h"
#include "Car.h"
#include <vector>
#include "Frog.h"

class Game {

private:

	std::vector<std::vector<Vehicle*> > traffic;
	Frog *frog;

public:
	Game();

	std::vector <std::vector<Vehicle*> > Game:: getTraffic();

	Frog* Game:: getFrog();
	

};


#endif