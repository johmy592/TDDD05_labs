//
// Created by johannes on 4/26/18.
//

#ifndef LAB3_TRAITS_DECK_H
#define LAB3_TRAITS_DECK_H
#include "Card.h"
#include <vector>
class Deck {
public:
    ~Deck() = default;
    Deck();

    Card *pop_card();
private:
    std::vector<Card*> cards_;
};


#endif //LAB3_TRAITS_DECK_H
