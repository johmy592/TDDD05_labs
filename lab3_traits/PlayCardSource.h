//
// Created by johannes on 4/30/18.
//

#ifndef LAB3_TRAITS_PLAYCARDSOURCE_H
#define LAB3_TRAITS_PLAYCARDSOURCE_H

#include "Context.h"
#include "PlayCardContext.h"
#include "Card.h"
#include "PlaySourceBase.h"
#include "PlayDestinationBase.h"

//#define SOURCE ((dynamic_cast<PlayCardContext*>(Context::currentContext_) ? \
                dynamic_cast<PlayCardContext*>(Context::currentContext_): \
                (throw("dynamic cast failed"), static_cast<PlayCardContext*>(nullptr)))->source())
template<class ConcreteDerived>
class PlayCardSource : public PlaySourceBase {
public:
    void play_card_to(int i)
    {
        ConcreteDerived *me = static_cast<ConcreteDerived*>(this);
        auto dest = ((dynamic_cast<PlayCardContext*>(Context::currentContext_) ? \
                dynamic_cast<PlayCardContext*>(Context::currentContext_): \
                    (throw("Dynamic cast failed"), static_cast<PlayCardContext*>(nullptr)))->destination());
        dest->add_card_to(me->remove_card_at(0),i);
    }
};

template<class ConcreteDerived>
class PlayCardDestination : public PlayDestinationBase{

};
#endif //LAB3_TRAITS_PLAYCARDSOURCE_H
