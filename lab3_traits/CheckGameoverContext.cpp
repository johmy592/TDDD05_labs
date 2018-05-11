//
// Created by johannes on 5/11/18.
//

#include <iostream>
#include "CheckGameoverContext.h"

CheckGameoverContext::CheckGameoverContext(Participant *p1, Participant *p2) {
    p1_ = p1;
    p2_ = p2;
}

bool CheckGameoverContext::execute_context() {
    if( p1_->has_cards() || p2_->has_cards())
        return false;

    if(p1_->get_points() > p2_->get_points()){
        std::cout << "PLAYER 1 WINS with " << p1_->get_points() << " points!";
    }else if(p1_->get_points() < p2_->get_points()){
        std::cout << "PLAYER 2 WINS with " << p2_->get_points() << " points!";
    }else{
        std::cout << "IT'S A DRAW!";
    }
    return true;
}