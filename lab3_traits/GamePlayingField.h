//
// Created by johannes on 5/11/18.
//

#ifndef LAB3_TRAITS_GAMEPLAYINGFIELD_H
#define LAB3_TRAITS_GAMEPLAYINGFIELD_H

#include "ResolveTurnContext.h"
#include "PlayingField.h"


template<class ConcreteDerived>
class GamePlayingField : public PlayingField {
public:
    GamePlayingField(void) {}

    int decide_winner(){
        auto me = static_cast<ConcreteDerived*>(this);

        int v1 = me->get_c1()->get_value();
        int v2 = me->get_c2()->get_value();
        std::cout << "Player 1 has card: " << v1 << "\n";
        std::cout << "Player 2 has card: " << v2 << "\n";

        if(v1 > v2){
            auto p1 = (((dynamic_cast<ResolveTurnContext*>(Context::currentContext_) ? \
                dynamic_cast<ResolveTurnContext*>(Context::currentContext_): \
                (throw("dynamic cast failed"), static_cast<ResolveTurnContext*>(nullptr)))->get_p1()));
            std::cout << "Player 1 wins! " << "\n";
            p1->increase_points(1);
        }else if(v2 > v1){
            auto p2 = (((dynamic_cast<ResolveTurnContext*>(Context::currentContext_) ? \
                dynamic_cast<ResolveTurnContext*>(Context::currentContext_): \
                (throw("dynamic cast failed"), static_cast<ResolveTurnContext*>(nullptr)))->get_p2()));
            std::cout << "Player 2 wins! " << "\n";
            p2->increase_points(1);
        }
        me->clear_board();

    }
};


#endif //LAB3_TRAITS_GAMEPLAYINGFIELD_H
