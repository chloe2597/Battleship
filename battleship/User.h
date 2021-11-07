#ifndef BATTLESHIP_USER_H
#define BATTLESHIP_USER_H
#include <iostream>
using namespace std;
#include "Grid.h"
#include "Ships.h"

class User {
protected:
    Grid grid;
    Ships submarine;
    Ships cruiser;
    Ships destroyer;
    Ships carrier;
    Ships battleship;
public:
    User();
    Grid& getGrid();
    void hit(Grid& grid, int n);
    bool hasWon(); //checks if user won

    void getShipsInfo(); //randomizes users ship placements
    void setShips(Ships&,int);
    void attackShips(Grid&);
    int generateRandomNumbers();
    char generateRandomOrient();
    void place(Ships &ship, int shipNum);
    int charToInt(char); //when user fires, this changes the column letter to a number
};

#endif //BATTLESHIP_USER_H
