//
// Created by johannes on 4/30/18.
//

#ifndef LAB3_TRAITS_PLAYDESTINATIONBASE_H
#define LAB3_TRAITS_PLAYDESTINATIONBASE_H


#include "Card.h"

class PlayDestinationBase {
public:
    virtual ~PlayDestinationBase() = default;

    virtual void add_card_to(Card *,int) = 0;
};


#endif //LAB3_TRAITS_PLAYDESTINATIONBASE_H
