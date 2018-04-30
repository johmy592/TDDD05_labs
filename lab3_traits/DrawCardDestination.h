//
// Created by johannes on 4/30/18.
//

#ifndef LAB3_TRAITS_DRAWCARDDESTINATION_H
#define LAB3_TRAITS_DRAWCARDDESTINATION_H

#include "CardDestination.h"
#include "DrawCardContext.h"

#define SELF static_cast<ConcreteDerived*>(this)
#define SOURCE (((dynamic_cast<DrawCardContext*>(Context::currentContext_) ? \
                dynamic_cast<DrawCardContext*>(Context::currentContext_): \
                (throw("dynamic cast failed"), static_cast<DrawCardContext*>(nullptr)))->cardSource()))

template<class ConcreteDerived>
class DrawCardDestination : public CardDestination {
public:
    void draw_from()
    {
        SELF->add_card(SOURCE->pop_card());
    }

    DrawCardDestination(void) {}
};


template<class ConcreteDerived>
class DrawCardSource : public CardSource {

};


#endif //LAB3_TRAITS_DRAWCARDDESTINATION_H
