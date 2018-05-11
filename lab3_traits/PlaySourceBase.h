//
// Created by johannes on 4/30/18.
//

#ifndef LAB3_TRAITS_PLAYSOURCEBASE_H
#define LAB3_TRAITS_PLAYSOURCEBASE_H


#include "Card.h"

class PlaySourceBase {
public:
    virtual ~PlaySourceBase() = default;

    virtual Card *remove_card_at(int) = 0;
    virtual void play_card_to(int i) = 0;
    virtual int make_move() = 0;
};


#endif //LAB3_TRAITS_PLAYSOURCEBASE_H
