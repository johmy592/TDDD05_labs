//
// Created by johannes on 4/26/18.
//

#include "Player.h"

void Player::add_card(Card *c) { hand_.push_back(c); }

void Player::increase_points(int i) { points_ += i; }

int Player::get_points() {return points_; }

Card* Player::remove_card_at(int i) {
    Card* ret = hand_.at(i);
    hand_.erase(hand_.begin() + i);
    return ret;
}