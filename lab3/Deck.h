//
// Created by viktor on 2018-04-26.
//

#ifndef LAB3_DECK_H
#define LAB3_DECK_H

#include "Card.h"
#include <vector>

class Deck {
public:
    Deck();
    Card* pop_card();
    bool is_empty();
private:
    std::vector<Card*> deck[10];
};


#endif //LAB3_DECK_H
