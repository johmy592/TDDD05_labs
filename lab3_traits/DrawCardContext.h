//
// Created by johannes on 4/30/18.
//

#ifndef LAB3_TRAITS_DRAWCARDCONTEXT_H
#define LAB3_TRAITS_DRAWCARDCONTEXT_H
#include "Context.h"
#include "CardSource.h"
#include "CardDestination.h"

class DrawCardContext : public Context {
public:
    ~DrawCardContext() = default;
    DrawCardContext() = default;
    DrawCardContext(CardSource *source, CardDestination *destination);

    CardSource *cardSource();
    CardDestination *cardDestination();
    void execute_context();

private:
    CardSource *source_;
    CardDestination *destination_;
};


#endif //LAB3_TRAITS_DRAWCARDCONTEXT_H
