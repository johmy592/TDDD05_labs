//
// Created by viktor on 2018-04-26.
//

#include <iostream>
#include "Board.h"

void Board::evaluate_round() {
    std::cout << "Player1 has card: " << card1_.get_value()<<std::endl;
    std::cout << "Player2 has card: " << card2_.get_value()<<std::endl;
    if(card1_.get_value() > card2_.get_value()){
        player1_->increase_points();
        std::cout << "Player1 wins!"<<std::endl;
        std::cout << std::endl;
    }
    else if(card1_.get_value() < card2_.get_value()){
        player2_->increase_points();
        std::cout << "Player2 wins!"<<std::endl;
        std::cout << std::endl;

    }
    else{
        std::cout << "It's a draw!" <<std::endl;

    }
}

void Board::set_cards(Card* card1, Card* card2) {
    card1_ = *card1;
    card2_ = *card2;
}