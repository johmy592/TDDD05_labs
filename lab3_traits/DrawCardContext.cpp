//
// Created by johannes on 4/30/18.
//

#include "DrawCardContext.h"

DrawCardContext::DrawCardContext(CardSource *source, CardDestination *destination) : Context() {
    source_ = source;
    destination_ = destination;
}

void DrawCardContext::execute_context(int num_cards) {
    for(int i = 0; i < num_cards; i++){
        cardDestination()->get_card_from();
    }
}

CardDestination *DrawCardContext::cardDestination() {
    return destination_;
}

CardSource *DrawCardContext::cardSource() {
    return source_;
}