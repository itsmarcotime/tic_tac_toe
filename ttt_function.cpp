#include <iostream>

char space[3][3] = {{'1','2','3'}, {'4','5','6'}, {'7','8','9'}};
int row;
int column;
char token = 'x';
bool tie = false;

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