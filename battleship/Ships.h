#ifndef BATTLESHIP_SHIPS_H
#define BATTLESHIP_SHIPS_H
#include <iostream>
using namespace std;

class Ships {

protected:
    int x, y; //starting position
    char orientation;
    int hits = 0;
    int shipLength;

public:
    Ships();

    Ships(char, int, int, int, int);
    void setX(int);
    void setY(int);
    int getShipLength() const;
    int getX();
    int getY();
    char getOrientation() const;
    int getHits() { return hits; }
    void increaseHits();
    string printShipName(int);

};
#endif //BATTLESHIP_SHIPS_H
