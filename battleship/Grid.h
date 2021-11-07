#ifndef BATTLESHIP_GRID_H
#define BATTLESHIP_GRID_H
#include <iostream>
using namespace std;
#include <vector>
#include "Ships.h"

class Grid
{
private:
    vector<vector<int>> grid;

public:

    Grid();

    void PrintUserGrid(); //prints grid
    void PrintComputersGrid();
    bool setShipPosition(Ships&, int, string);
    bool place(Ships&, int, int, int);
    bool isHit(int, int);
    int whichShip(int, int);
    vector<vector<int>>& getVector() { return grid; }
};


#endif //BATTLESHIP_GRID_H
