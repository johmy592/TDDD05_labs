//
// Created by viktor on 2018-04-26.
//

#ifndef LAB3_BOARD_H
#define LAB3_BOARD_H
#include "Card.h"
#include "HumanPlayer.h"
#include "AIPlayer.h"

class Board {
public:
    Board(HumanPlayer* human, AIPlayer* ai) : player1_{human}, player2_{ai} {}
    void evaluate_round();
    void set_cards(Card* card1, Card* card2);
private:
    Card card1_ = NULL;
    Card card2_ = NULL;
    HumanPlayer* player1_;
    AIPlayer* player2_;

};


#endif //LAB3_BOARD_H
