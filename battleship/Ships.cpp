#include <iostream>
using namespace std;
#include "Ships.h"

Ships :: Ships() {

    hits = 0;
}

Ships::Ships(char orient, int _x, int _y, int _shipLength, int shipNum)
{
    x = _x;
    y = _y;
    orientation = orient;
    shipLength = _shipLength;
    hits = 0;
}

char Ships :: getOrientation() const
{
    return orientation;
}

void Ships::increaseHits()
{
    hits++;
}

int Ships :: getShipLength() const
{
    return shipLength;
}

string Ships :: printShipName(int shipNum) //returns ship name, each ship is definied by a specific num in the vector
{
    if (shipNum == 3)
        return "Submarine";
    if (shipNum == 4)
        return "Cruiser";
    if (shipNum == 5)
        return "Destroyer";
    if (shipNum == 6)
        return "Carrier";
    if (shipNum == 7)
        return "Battleship";
}

int Ships::getX()
{
    return x;
}

int Ships::getY()
{
    return y;
}

void Ships::setX(int _x)
{
    x = _x;
}

void Ships::setY(int _y)
{
    y = _y;
}