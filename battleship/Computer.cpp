#include <iostream>
using namespace std;
#include "Computer.h"
#include "Grid.h"
#include <string>

Computer::Computer() {

}
Grid& Computer::getGrid(){
    return grid;
}

//getShipsInfo is roughly from c plus plus online
void Computer :: getShipsInfo() //generates random nums for ships to be placed
{

    int x = generateRandomNumbers();
    int y = generateRandomNumbers();


    //Submarine
    Ships sub(generateRandomOrient(), x,y, 3, 3);
    submarine = sub;
    setShips(sub, 3);

    x = generateRandomNumbers();
    y = generateRandomNumbers();

    //Cruiser
    Ships cru(generateRandomOrient(), x,y, 3, 4);
    cruiser = cru;
    setShips(cru, 4);

    x = generateRandomNumbers();
    y = generateRandomNumbers();

    //Destroyer
    Ships dest(generateRandomOrient(), x,y, 2, 5);
    destroyer = dest;
    setShips(dest, 5);

    x = generateRandomNumbers();
    y = generateRandomNumbers();

    //Carrier
    Ships carr(generateRandomOrient(), x,y, 5, 6);
    carrier = carr;
    setShips(carr, 6);

    x = generateRandomNumbers();
    y = generateRandomNumbers();

    //BattleShip
    Ships battle(generateRandomOrient(),x,y, 4, 7);
    battleship = battle;
    setShips(battle, 7);



}

void Computer :: setShips(Ships& ship, int num) //checks if ships is placed, if not then genrates another random numbers
{
    if (!grid.setShipPosition(ship, num, ship.printShipName(num)))
    {
        place(ship, num);
    }

}


int Computer :: generateRandomNumbers() {
    return rand() % 10 + 1;

}
char Computer :: generateRandomOrient() {

    int randomOrient = rand() % 2;
    char orient;

    if (randomOrient == 0)
        orient = 'h';
    else
        orient = 'v';
    return orient;
}
void Computer :: place(Ships& ship, int shipNum) {
    ship.setX(generateRandomNumbers());
    ship.setY(generateRandomNumbers());
    if (!grid.setShipPosition(ship, shipNum, ship.printShipName(shipNum))) {
        place(ship, shipNum);
    }
}

void Computer :: hit(Grid& grid, int n) //checks which ship has been hit and writes the name of that ship
{
    if (n == 3) {
        cout << "Your submarine was hit!" << endl;
        submarine.increaseHits();
    }
    else if (n == 4) {
        cout << "Your cruiser was hit!" << endl;
        cruiser.increaseHits();
    }
    else if (n == 5) {
        cout << "Your destroyer was hit!" << endl;
        destroyer.increaseHits();
    }
    else if (n == 6) {
        cout << "Your carrier was hit!" << endl;
        carrier.increaseHits();
    }
    else if (n == 7) {
        cout << "Your battleship was hit!" << endl;
        battleship.increaseHits();
    }
    else {

    }

}

bool Computer:: hasWon() { //is supposed to check if the player won the game

    if (submarine.getHits() && cruiser.getHits() &&
        destroyer.getHits() && carrier.getHits() &&
        battleship.getHits() ){
        return true;
    }
    else
    {
        return false;
    }

}

void Computer :: attackShips(Grid& user) //randomly attacks ships
{

    //int shipNum = 0;
    int randomRow = rand() % (10); //randomly chooses a row
    int randomCol = rand() % (10); //randomly chooses a column

    if (user.isHit(randomRow, randomCol)) {
        user.getVector()[randomRow][randomCol] = 1;
        int n = user.whichShip(randomRow, randomCol);
        hit(user, n);
    }
    else
    {
        user.getVector()[randomRow][randomCol] = 2;
    }
    user.PrintUserGrid();
}

