//
// Created by johannes on 4/30/18.
//

#ifndef LAB3_TRAITS_PLAYCARDCONTEXT_H
#define LAB3_TRAITS_PLAYCARDCONTEXT_H


#include "Context.h"


#include "PlaySourceBase.h"
#include "PlayDestinationBase.h"

class PlayCardContext : public Context{
public:
    ~PlayCardContext() = default;
    PlayCardContext() = default;
    PlayCardContext(PlaySourceBase *source, PlayDestinationBase * destination);

    PlayDestinationBase *destination();
    PlaySourceBase *source();

    void execute_context(int);
private:
    PlaySourceBase *source_;
    PlayDestinationBase *destination_;
};


#endif //LAB3_TRAITS_PLAYCARDCONTEXT_H
