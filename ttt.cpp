#include <iostream>
#include "ttt_function.hpp"

int main() {
    getPlayerNames();
    
    while (!winOrTie()) {
        layoutFunction();
        positionFunction();
        winOrTie();
    }

    displayWinner();
}