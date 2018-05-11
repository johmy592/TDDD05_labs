//
// Created by viktor on 2018-05-08.
//

#include "AIPlayer.h"

Card* AIPlayer::pick_card() {
    int index = 1;
    Card* ret = hand_.at(index-1);
    hand_.erase(hand_.begin() + index-1);
    return ret;
}