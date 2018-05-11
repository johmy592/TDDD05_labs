//
// Created by johannes on 5/11/18.
//

#ifndef LAB3_TRAITS_CHECKGAMEOVERCONTEXT_H
#define LAB3_TRAITS_CHECKGAMEOVERCONTEXT_H


#include "Participant.h"
#include "CardSource.h"

class CheckGameoverContext {
public:
    ~CheckGameoverContext() = default;
    CheckGameoverContext(Participant *p1, Participant *p2);

    bool execute_context();
private:
    Participant *p1_;
    Participant *p2_;

};


#endif //LAB3_TRAITS_CHECKGAMEOVERCONTEXT_H
