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

    switch(digit) {
        case 1:
            std::cout << "Hello! \n";
            break;
        case 2:
            std::cout << "Goodbye! \n";
            break;
        default:
            std::cout << "Invalid \n";
            break;
    }
}