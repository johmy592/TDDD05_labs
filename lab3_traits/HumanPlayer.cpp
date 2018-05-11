//
// Created by johannes on 5/11/18.
//

#include "HumanPlayer.h"
#include <iostream>

int HumanPlayer::make_move() {
    int move;
    print_hand();
    std::cout << "ENTER INDEX OF CARD TO PLAY: ";
    std::cin >> move;
    std::cout << std::endl;
    return move;
}