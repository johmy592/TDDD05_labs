//
// Created by viktor on 2018-04-26.
//

#include <iostream>
#include "Player.h"

void Player::increase_points() {
    ++points_;
}

void Player::draw_cards(int amount, Deck* deck) {
    if(hand_.size() < 3){
        for(int i = 0; i < amount; ++i){
            Card* card = deck->pop_card();
            std::cout << "ADDING; " << card->get_value() << " ";
            hand_.push_back(card);
        }
    }else{
        std::cout << "Illegal move, you can only have 3 cards on hand at the time. " << std::endl;
    }
}

void Player::show_hand() {
    std::cout << "This is my hand! [ ";
    Card* c;
    for (int i = 0; i<hand_.size(); ++i){
        c = hand_.at(i);
        std::cout << std::to_string(c->get_value()) << " ";
    }
    std::cout << " ]. Pick by writing 1, 2 or 3." << std::endl;
}

Card* Player::pick_card(int index) {
    Card* ret = hand_.at(index);
    hand_.erase(hand_.begin() + index);
    return ret;
}

int Player::get_points() {
    return points_;
}