#include <iostream>
#include <string>

char space[3][3] = {{'1','2','3'}, {'4','5','6'}, {'7','8','9'}};
int row;
int column;
char token = 'x';
bool tie = false;

std::string name1;
std::string name2;

void getPlayerNames() {
    std::cout << "Enter the name of player 1: \n";
    std::cin >> name1;
    std::cout << "Enter the name of player 2: \n";
    std::cin >> name2;

    std::cout << name1 << " is player 1 so you will go first.\n";
    std::cout << name2 << " is player 2 so you will go second.\n";
}

void layoutFunction() {
    std::cout << "     |     |     \n";
    std::cout << "   " << space[0][0] << " |  " << space[0][1] << "  |  " << space[0][2] << "   \n";
    std::cout << "_____|_____|_____\n";
    std::cout << "     |     |     \n";
    std::cout << "   " << space[1][0] << " |  " << space[1][1] << "  |  " << space[1][2] << "   \n";
    std::cout << "_____|_____|_____\n";
    std::cout << "     |     |     \n";
    std::cout << "   " << space[2][0] << " |  " << space[2][1] << "  |  " << space[2][2] << "   \n";
    std::cout << "     |     |     \n";
}

void positionFunction() {
    int digit;

    if (token == 'x') {
        std::cout << name1 << " please enter the number you want to mark.\n";
        std::cin >> digit;
    }

    if (token == 'o') {
        std::cout << name2 << " please enter the number you want to mark.\n";
        std::cin >> digit;
    }

    if (digit == 1) {
        row = 0;
        column = 0;
    } else if (digit == 2) {
        row = 0;
        column = 1;
    } else if (digit == 3) {
        row = 0;
        column = 3;
    } else if (digit == 4) {
        row = 1;
        column = 0;
    } else if (digit == 5) {
        row = 1;
        column = 1;
    } else if (digit == 6) {
        row = 1;
        column = 2;
    } else if (digit == 7) {
        row = 2;
        column = 0;
    } else if (digit == 8) {
        row = 2;
        column = 1;
    } else if (digit == 9) {
        row = 2;
        column = 2;
    } else {
        std::cout << "Invalid input!\n";
    }
}

void gameFunction() {
    if (token == 'x' && space[row][column] != 'x' && space[row][column] != 'o') {
        space[row][column] = 'x';
        token = 'o';
    } else if (token == 'o' && space[row][column] != 'x' && space[row][column] != 'o') {
        space[row][column] = 'o';
        token = 'x';
    } else {
        std::cout << "There is no emty space!\n";
        positionFunction();
    }

    layoutFunction();
}