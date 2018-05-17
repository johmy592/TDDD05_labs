//
// Created by viktor on 2018-04-26.
//

#ifndef LAB3_BOARD_H
#define LAB3_BOARD_H
#include "Card.h"
#include "Player.h"

class Board {
public:
    Board(Player* human, Player* ai) : player1_{human}, player2_{ai} {}
    void evaluate_round();
    void set_cards(Card* card1, Card* card2);
private:
    Card card1_ = NULL;
    Card card2_ = NULL;
    Player* player1_;
    Player* player2_;
};


#endif //LAB3_BOARD_H
