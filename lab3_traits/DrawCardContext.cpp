//
// Created by johannes on 4/30/18.
//

#include "DrawCardContext.h"

DrawCardContext::DrawCardContext(CardSource *source, CardDestination *destination) {
    source_ = source;
    destination_ = destination;
}

void DrawCardContext::execute_context() {
    cardDestination()->draw_from();
}

CardDestination *DrawCardContext::cardDestination() {
    return destination_;
}

CardSource *DrawCardContext::cardSource() {
    return source_;
}