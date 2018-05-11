//
// Created by johannes on 4/26/18.
//

#include "Board.h"
#include <iostream>

Card *Board::get_c1() { return card1_; }
Card *Board::get_c2() { return card2_; }

void Board::add_card_to(Card * c, int i) {
    if(i == 1)
    {
        card1_ = c;
    }else
    {
        card2_ = c;
    }
}

void Board::print_board(){
    int size;
    if(card1_ != nullptr)
        size++;
    if(card2_ != nullptr)
        size++;
    std::cout << "BOARD SIZE: " << size << std::endl;
}

void Board::clear_board() {
    card2_ = nullptr;
    card1_ = nullptr;
}