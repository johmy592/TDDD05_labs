//
// Created by viktor on 2018-04-26.
//

#ifndef LAB3_HUMANPLAYER_H
#define LAB3_HUMANPLAYER_H

#include "Player.h"
#include "Card.h"

class HumanPlayer : public Player {
public:
    HumanPlayer() = default;
    Card* pick_card() final override;
};


#endif //LAB3_PLAYER_H
