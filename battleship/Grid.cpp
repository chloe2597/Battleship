#include <iostream>
using namespace std;
#include "Grid.h"

const int GRID_MAX = 10;

Grid::Grid()
{
    grid.resize(GRID_MAX, vector < int >(GRID_MAX, 0));//creates grid with 0's in it
}

void Grid::PrintUserGrid() //prints users grid
{
    cout << endl;
    cout << "    A   B   C   D   E   F   G   H   I   J   " << endl;
    for (int i = 0; i < GRID_MAX; i++) { //goes through rows
        if (i + 1 == 10)
            cout << i + 1 << " ";
        else
            cout << i + 1 << "   ";
        for (int j = 0; j < GRID_MAX; j++) { //goes through columns

            if (grid[i][j] == 0)
                cout << " " << "   "; //prints the number in this position, got the idea to use these letters from a youtube video
            if (grid[i][j] == 1)
                cout << "O" << "   ";
            if (grid[i][j] == 2)
                cout << "X" << "   ";
            if (grid[i][j] == 3)
                cout << "S" << "   ";
            if (grid[i][j] == 4)
                cout << "C" << "   ";
            if (grid[i][j] == 5)
                cout << "D" << "   ";
            if (grid[i][j] == 6)
                cout << "K" << "   ";
            if (grid[i][j] == 7)
                cout << "B" << "   ";
        }
        cout << endl;
    }
    cout << endl;
}

void Grid::PrintComputersGrid() //prints computers grid
{
    cout << endl;
    cout << "    A   B   C   D   E   F   G   H   I   J   " << endl;
    for (int i = 0; i < GRID_MAX; i++) { //goes through rows
        if (i + 1 == 10)
            cout << i + 1 << " ";
        else
            cout << i + 1 << "   ";
        for (int j = 0; j < GRID_MAX; j++) { //goes through columns

            if (grid[i][j] == 0)
                cout << " " << "   "; //prints the number in this position
            if (grid[i][j] == 1)
                cout << "O" << "   ";
            if (grid[i][j] == 2)
                cout << "X" << "   ";
            if (grid[i][j] == 3)
                cout << " " << "   ";
            if (grid[i][j] == 4)
                cout << " " << "   ";
            if (grid[i][j] == 5)
                cout << " " << "   ";
            if (grid[i][j] == 6)
                cout << " " << "   ";
            if (grid[i][j] == 7)
                cout << " " << "   ";
        }
        cout << endl;
    }
    cout << endl;
}

//I got the idea for this function from a youtube video
bool Grid :: setShipPosition(Ships& ship, int shipNum, string name)
{

    bool isPlaced = false;
    int shipLength = ship.getShipLength();
    int x = ship.getX()-1;
    int y = ship.getY()-1;
    int endX = x + shipLength;
    int endY = y + shipLength;


    if (endX <= 10 && endY <= 10)
    {

        if (ship.getOrientation() == 'h' || ship.getOrientation() == 'H')
        {

            if (place(ship, x, y, shipNum))
            {

                while (shipLength > 0)
                {
                    grid[x][y] = shipNum;
                    y++;
                    shipLength--;
                }
                isPlaced = true;

            }

        }
        else if (ship.getOrientation() == 'v' || ship.getOrientation() == 'V')
        {

            if (place(ship, x, y, shipNum))
            {

                while (shipLength > 0)
                {
                    grid[x][y] = shipNum;
                    x++;
                    shipLength--;
                }
                isPlaced = true;
            }
        }
    }
    return isPlaced;
}

bool Grid :: place(Ships& object, int x, int y, int shipNum)
{

    bool canPlace = false; //checks if another ship is present


    if (object.getOrientation() == 'h' || object.getOrientation() == 'H')
    {

        for (int i = 0; i < object.getShipLength(); i++)
        {

            if (x >= 0 && x < 10 && y >= 0 && y < 10) {

                if (grid[x][y] != 0)
                {
                    canPlace = false;
                    return canPlace;
                }
                else {
                    canPlace = true;
                    y++;
                }
            }
        }
    }
    else if (object.getOrientation() == 'v' || object.getOrientation() == 'V')
    {
        for (int i = 0; i < object.getShipLength(); i++)
        {
            if (x >= 0 && x <= 9 && y >= 0 && y <= 9) {
                if (grid[x][y] != 0)
                {
                    canPlace = false;
                    return canPlace;
                }
                else
                {
                    canPlace = true;
                    x++;
                }
            }
        }
    }
    return canPlace;
}


bool Grid :: isHit(int x, int y) {

    if (grid[x][y] != 0 && grid[x][y] != 1 && grid[x][y] != 2)
    {
        return true;
    }
    else
    {
        grid[x][y] = 2;
        return false;
    }
}

int Grid :: whichShip(int x, int y)//returns number of ship
{

    int shipNum = 0 ;

    shipNum = grid[x][y];
    grid[x][y] = 1;

    return shipNum;
}
