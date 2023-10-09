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
        column = 2;
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

    if (token == 'x' && space[row][column] != 'x' && space[row][column] != 'o') {
        space[row][column] = 'x';
        token = 'o';
    } else if (token == 'o' && space[row][column] != 'x' && space[row][column] != 'o') {
        space[row][column] = 'o';
        token = 'x';
    } else {
        std::cout << "There is no empty space!\n";
        positionFunction();
    }

    layoutFunction();
}


bool winOrTie() {
    for (int i = 0; i < 3; i++) {
        if (space[i][0] == space[i][1] && space[i][0] == space[i][2] || space[0][i] == space[1][i] && space[0][i] == space[2][i]) {
            return true;
        }
    }

    if (space[0][0] == space[1][1] && space[1][1] == space[2][2] || space[0][2] == space[1][1] && space[1][1] == space[2][0]) {
        return true;
    }

    // checking 3x3 matrix using double for loop if there are empty spaces return false because game is on going
    // otherwise all spaces are full so tie becomes true and false is still returned as there is no winner.
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (space[i][j] != 'x' && space[i][j] != 'o') {
                return false;
            }
        }
    }
    tie = true;
    return false;

}

void displayWinner() {
    if (token == 'x' && tie == false) {
        std::cout << name2 << " Wins!!\n";
    } else if (token == 'o' && tie == false) {
        std::cout << name1 << " Wins!!\n";
    } else {
        std::cout << "Oh no! Its a tie!\n";
    }
}