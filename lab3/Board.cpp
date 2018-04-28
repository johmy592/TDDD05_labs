//
// Created by viktor on 2018-04-26.
//

#include <iostream>
#include "Board.h"

void Board::evaluate_round() {
    std::cout << "Player1 chose a card with value: " << card1_.get_value()<<std::endl;
    std::cout << "Player2 chose a card with value: " << card2_.get_value()<<std::endl;
    if(card1_.get_value() > card2_.get_value()){
        player1_.increase_points();
        std::cout << "Player1 won the round! One point is added to your score!"<<std::endl;
        std::cout << std::endl;
    }
    if(card1_.get_value() < card2_.get_value()){
        player2_.increase_points();
        std::cout << "Player2 won the round! One point is added to your score!"<<std::endl;
        std::cout << std::endl;

    }
    if(card1_.get_value() == card2_.get_value()){
        player1_.increase_points();
        player2_.increase_points();
        std::cout << "ITS A DRAAAAAAAAAAAAAW! Points to both players!"<<std::endl;

    }
}

void Board::set_cards(Card* card1, Card* card2) {
    card1_ = *card1;
    card2_ = *card2;
}