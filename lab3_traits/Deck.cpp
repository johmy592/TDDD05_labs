//
// Created by johannes on 4/26/18.
//

#include "Deck.h"


Card* Deck::pop_card() {
    Card * ret = cards_.back();
    cards_.pop_back();
    return ret;
}