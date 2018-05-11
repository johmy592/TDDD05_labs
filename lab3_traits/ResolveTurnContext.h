//
// Created by johannes on 5/11/18.
//

#ifndef LAB3_TRAITS_RESOLVETURNCONTEXT_H
#define LAB3_TRAITS_RESOLVETURNCONTEXT_H

#include "Context.h"
#include "GameParticipant.h"
#include "PlayingField.h"

class ResolveTurnContext : public Context {
public:
    ~ResolveTurnContext() = default;
    ResolveTurnContext() = default;
    ResolveTurnContext(Participant *p1, Participant *p2, PlayingField *gpf);

    Participant *get_p1();
    Participant *get_p2();

    void execute_context();
private:
    Participant *p1_;
    Participant *p2_;
    PlayingField *gpf_;
};


#endif //LAB3_TRAITS_RESOLVETURNCONTEXT_H
