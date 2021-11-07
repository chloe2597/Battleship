#ifndef BATTLESHIP_COMPUTER_H
#define BATTLESHIP_COMPUTER_H
#include <iostream>
using namespace std;
#include "Grid.h"
#include "Ships.h"

class Computer {
protected:
    //Got the idea to use make the different ships objects protected from a video on youtube
    Grid grid;
    Ships submarine;
    Ships cruiser;
    Ships destroyer;
    Ships carrier;
    Ships battleship;

public:
    Computer();
    Grid& getGrid();
    void hit(Grid& grid, int n); //counts hits on users board
    bool hasWon(); //checks if there is a winner

    void getShipsInfo(); //generates random ship positions
    void setShips(Ships&,int); //puts ships on board
    void attackShips(Grid&);
    int generateRandomNumbers();
    char generateRandomOrient();
    void place(Ships &ship, int shipNum);
};

#endif //BATTLESHIP_COMPUTER_H
