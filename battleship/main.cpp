#include <iostream>
using namespace std;
//#include "Grid.h"
#include "User.h"
#include "Computer.h"
#include <time.h>

//Note: I watched a video and read an example to fix some of the issues I was having and to get some help on parts

int main() {
    char playAgain;
    int isThereAWinner = 1;

    cout << "Lets play Battleship!" << endl << endl;

    cout << "Listed below are the ship types, sizes, and the letters they will be represented by on your board." << endl;
    cout << "Ship Type       Size     Letter on board" << endl;
    cout << "Carrier           5             K" << endl;
    cout << "Battleship        4             B" << endl;
    cout << "Cruiser           3             C" << endl;
    cout << "Submarine         3             S" << endl;
    cout << "Destroyer         2             D" << endl;
    cout << endl << endl;


    srand(time(NULL)); //used to make sure the randomized spots are not always the same.

    do {

        cout << "This is your board with your ships placed: " << endl;
        User user;
        user.getShipsInfo(); //generates random ship positions for the user
        user.getGrid().PrintUserGrid(); //displays the users grid


        Computer computer;
        computer.getShipsInfo(); //generates random ship positions for the computer. Does not display board, the board is kept hidden from player.

        cout << "The computer has placed their ships, but the ships are hidden from you. " << endl << endl;

        cout << "An X will be printed if you miss." << endl; //more game instructions
        cout << "A O will be printed if you hit. " << endl;
        cout << endl;

        do {
            cout << "It's your turn to fire! " << endl;
            user.attackShips(computer.getGrid()); //asks user for row and column they want to fire on

            //computer shoots
            cout << "Computer has fired. " << endl;
            computer.attackShips(user.getGrid()); //computer randomly generates row and column it fires on and displays user grid with the hits and misses
            computer.getGrid().PrintComputersGrid(); //displays computers grid with the users hit and misses

            if (computer.hasWon()) { //checks if computer has won
                cout << "The computer has won the game" << endl; //displays this if the computer won
                isThereAWinner = 2; //returns this so the game will end once there is a winner
            } else if (user.hasWon()) { //checks if user won
                cout << "You won the game! Good job! " << endl; //displays this if the user won
                isThereAWinner = 2; //returns this so the game will end once there is a winner
            }
        } while (isThereAWinner == 1); //if 1 is returned, then the game will continue until there is a winner

        cout << "Do you want to play again? (y or n):" << endl; //asks the user if they want to play again
        cin >> playAgain;

    } while (playAgain == 'y' || playAgain == 'Y'); //starts game over

    if (playAgain == 'n' || playAgain == 'N') {
        cout << "Game is over!" << endl; //displays message if the user does not want to play again.
    }
    return 0;
}
