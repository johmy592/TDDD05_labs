//
// Created by johannes on 5/11/18.
//

#include "HumanPlayer.h"
#include <iostream>

int HumanPlayer::make_move() {
    int move;
    std::cout << "ENTER INDEX OF CARD TO PLAY: ";
    std::cin >> move;
    return move;
}