//
// Created by johannes on 4/30/18.
//

#ifndef LAB3_TRAITS_CARDSOURCE_H
#define LAB3_TRAITS_CARDSOURCE_H

#include "Card.h"

class CardSource {
public:
    virtual ~CardSource() = default;

    virtual Card *pop_card() = 0;

};


#endif //LAB3_TRAITS_CARDSOURCE_H
