//
// Created by johannes on 4/30/18.
//

#ifndef LAB3_TRAITS_CARDSOURCE_H
#define LAB3_TRAITS_CARDSOURCE_H

#include "Card.h"

class CardSource {
public:
    virtual ~CardSource() = default;

    //virtual Card *pop_card() = 0;
    virtual Card *remove_card_at(int) = 0;
    virtual bool has_cards() = 0;
};


#endif //LAB3_TRAITS_CARDSOURCE_H
