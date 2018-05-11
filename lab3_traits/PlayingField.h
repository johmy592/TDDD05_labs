//
// Created by johannes on 5/11/18.
//

#ifndef LAB3_TRAITS_PLAYINGFIELD_H
#define LAB3_TRAITS_PLAYINGFIELD_H

#include "Card.h"
class PlayingField {
public:
    virtual ~PlayingField() = default;

    virtual Card *get_c1() = 0;
    virtual Card *get_c2() = 0;
    virtual int decide_winner() = 0;
};


#endif //LAB3_TRAITS_PLAYINGFIELD_H
