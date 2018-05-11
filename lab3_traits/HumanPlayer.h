//
// Created by johannes on 5/11/18.
//

#ifndef LAB3_TRAITS_HUMANPLAYER_H
#define LAB3_TRAITS_HUMANPLAYER_H


#include "Player.h"

class HumanPlayer : public Player {
public:
    HumanPlayer(int val) : Player(val) {}

    int make_move();

};


#endif //LAB3_TRAITS_HUMANPLAYER_H
