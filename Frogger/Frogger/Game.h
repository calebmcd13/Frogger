#ifndef GAME_H
#define GAME_H

#include "Vehicle.h"
#include "Arena.h"
#include "Car.h"
#include <vector>

class Game {

private:

	std::vector<std::vector<Vehicle*> > traffic;

public:
	Game();

	std::vector <std::vector<Vehicle*> > Game:: getTraffic();

	
};


#endif