//
// Created by viktor on 2018-05-08.
//

#ifndef LAB3_AIPLAYER_H
#define LAB3_AIPLAYER_H

#include "Player.h"
#include "Card.h"

class AIPlayer : public Player {
public:
    AIPlayer() = default;
    Card* pick_card() final override;
};


#endif //LAB3_AI_PLAYER_H
