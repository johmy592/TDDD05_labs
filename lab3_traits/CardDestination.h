//
// Created by johannes on 4/30/18.
//

#ifndef LAB3_TRAITS_CARDDESTINATION_H
#define LAB3_TRAITS_CARDDESTINATION_H


#include "Card.h"

class CardDestination{
public:
    virtual ~CardDestination() = default;

    virtual void draw_from() = 0;
    virtual void add_card(Card *) = 0;

};


#endif //LAB3_TRAITS_CARDSOURCE_H
