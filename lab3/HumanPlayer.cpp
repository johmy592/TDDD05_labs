//
// Created by viktor on 2018-04-26.
//

#include <iostream>
#include "HumanPlayer.h"

Card* HumanPlayer::pick_card() {
    std::cout << "ENTER INDEX OF CARD TO PLAY: ";
    std::string card_choice;
    std::getline(std::cin, card_choice);
    int card_index = std::stoi(card_choice);
    Card* ret = hand_.at(card_index-1);
    hand_.erase(hand_.begin() + card_index-1);
    return ret;
}
