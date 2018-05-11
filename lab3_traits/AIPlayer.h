//
// Created by johannes on 5/11/18.
//

#ifndef LAB3_TRAITS_AIPLAYER_H
#define LAB3_TRAITS_AIPLAYER_H


#include "Player.h"

class AIPlayer : public Player {
public:
    AIPlayer(int val) : Player(val) {}

    int make_move();
};


#endif //LAB3_TRAITS_AIPLAYER_H
