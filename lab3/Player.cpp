//
// Created by viktor on 2018-05-08.
//

#include "Player.h"
#include <iostream>

void Player::increase_points() {
    ++points_;
}

void Player::draw_cards(int amount, Deck* deck) {
    if(hand_.size() < 3){
        for(int i = 0; i < amount; ++i){
            Card* card = deck->pop_card();
            hand_.push_back(card);
        }
    }else{
        std::cout << "Illegal move, you can only have 3 cards on hand at the time. " << std::endl;
    }
}

void Player::show_hand() {
    std::cout << "Your cards:" << std::endl;
    for (Card* c: hand_){
        std::cout << std::to_string(c->get_value()) << " ";
    }
    std::cout << std::endl;
}

int Player::get_points() {
    return points_;
}

bool Player::empty_hand() {
    return hand_.empty();
}