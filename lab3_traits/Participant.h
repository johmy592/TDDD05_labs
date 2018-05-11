//
// Created by johannes on 5/11/18.
//

#ifndef LAB3_TRAITS_PARTICIPANT_H
#define LAB3_TRAITS_PARTICIPANT_H

#include "Card.h"
class Participant {
public:
    virtual ~Participant() = default;

    virtual void increase_points(int) = 0;
    virtual int make_move() = 0;
    virtual bool has_cards() = 0;
    virtual int get_points() = 0;
};


#endif //LAB3_TRAITS_PARTICIPANT_H
