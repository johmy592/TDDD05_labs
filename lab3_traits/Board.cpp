//
// Created by johannes on 4/26/18.
//

#include "Board.h"

void Board::add_card_to(Card * c, int i) {
    if(i == 1)
    {
        card1_ = c;
    }else
    {
        card2_ = c;
    }
}