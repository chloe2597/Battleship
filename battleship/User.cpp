#include <iostream>
using namespace std;
#include "User.h"
#include "Grid.h"
#include <string>

User::User() {

}
Grid& User::getGrid(){
    return grid;
}

//getShipsInfo is roughly from c plus plus online
void User :: getShipsInfo() //generates random nums for ships to be placed
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

void User :: setShips(Ships& ship, int num) //checks if ships is placed, if not then genrates another random numbers
{
    if (!grid.setShipPosition(ship, num, ship.printShipName(num)))
    {
        place(ship, num);
    }
}


int User :: generateRandomNumbers() {
    return rand() % 10 + 1;

}
char User :: generateRandomOrient() {

    int randomOrient = rand() % 2;
    char orient;

    if (randomOrient == 0)
        orient = 'h';
    else
        orient = 'v';
    return orient;
}

void User :: place(Ships& ship, int shipNum) {
    ship.setX(generateRandomNumbers());
    ship.setY(generateRandomNumbers());
    if (!grid.setShipPosition(ship, shipNum, ship.printShipName(shipNum))) {
        place(ship, shipNum);
    }
}

void User::attackShips(Grid & computer) {
    bool isValid = true; //checks if inputs are valid
    char col;
    int row, column;

    cout << "Enter the letter of the column you want to shoot: " << endl;
    cin >> col;

    cout << "Enter the number of the row that you want to shoot: " << endl;
    cin >> row;

    column = charToInt(col);
    try {
        while (row < 1 || row > 11) {
            isValid = false;
            cout << "Row is invalid. It is not a number between 1-10 " << endl;
            cin >> row;


        }
        while (column == 11) {
            isValid = false;
            cout << "Column is invalid. It's not a letter between A-J." << endl;
            cin >> col;
            break;

        }
        if (cin.fail())
        {
            isValid = false;
            cin.clear();
            cout << "Please enter valid inputs\n";
        }


        if (isValid) {
            cout << endl << endl;

            if (computer.isHit(row - 1, column - 1)) {//checks if ship is hit
                computer.getVector()[row-1][col-1] = 1;
                int n = computer.whichShip(row - 1, column - 1);
                hit(computer, n);
            }
        }
    }
    catch (const out_of_range& e) {
        cout << "cannot shoot at that spot" << endl;
    }
}

void User::hit(Grid &grid, int n) {
    if (n == 3) {
        cout << "You hit the computer's submarine!" << endl;
        submarine.increaseHits();
    }
    else if (n == 4) {
        cout << "You hit the computer's cruiser!" << endl;
        cruiser.increaseHits();
    }
    else if (n == 5) {
        cout << "You hit the computer's destroyer!" << endl;
        destroyer.increaseHits();
    }
    else if (n == 6) {
        cout << "You hit the computer's carrier!" << endl;
        carrier.increaseHits();
    }
    else if (n == 7) {
        cout << "You hit the computer's battleship!" << endl;
        battleship.increaseHits();
    }
    else {

    }

}

bool User:: hasWon() { //is supposed to check if the player won the game

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

int User :: charToInt(char letter) { //changes the columns from letters to numbers

    if (letter == 'A' || letter == 'a')
        return 1;
    if (letter == 'B' || letter == 'b')
        return 2;
    if (letter == 'C' || letter == 'c')
        return 3;
    if (letter == 'D' || letter == 'd')
        return 4;
    if (letter == 'E' || letter == 'e')
        return 5;
    if (letter == 'F' || letter == 'f')
        return 6;
    if (letter == 'G' || letter == 'g')
        return 7;
    if (letter == 'H' || letter == 'h')
        return 8;
    if (letter == 'I' || letter == 'i')
        return 9;
    if (letter == 'J' || letter == 'j')
        return 10;
    else
        return 11;
}

