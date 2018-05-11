//
// Created by johannes on 4/30/18.
//

#include "PlayCardContext.h"

PlayCardContext::PlayCardContext(PlaySourceBase *source, PlayDestinationBase *destination) {
    source_ = source;
    destination_ = destination;
}
PlaySourceBase *PlayCardContext::source() { return source_; }

PlayDestinationBase *PlayCardContext::destination() { return destination_; }

void PlayCardContext::execute_context(int i) {
    source()->play_card_to(i);
}