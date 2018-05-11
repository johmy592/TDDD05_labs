//
// Created by johannes on 5/11/18.
//

#include <iostream>
#include "ResolveTurnContext.h"

ResolveTurnContext::ResolveTurnContext(Participant *p1, Participant *p2, PlayingField *gpf) : Context() {
    p1_ = p1;
    p2_ = p2;
    gpf_ = gpf;
}

Participant *ResolveTurnContext::get_p1() { return p1_; }
Participant *ResolveTurnContext::get_p2() { return p2_; }

void ResolveTurnContext::execute_context() {
    gpf_->decide_winner();
}