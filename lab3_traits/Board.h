//
// Created by johannes on 4/26/18.
//

#ifndef LAB3_TRAITS_BOARD_H
#define LAB3_TRAITS_BOARD_H

#include "Card.h"
#include "Player.h"

class Board : public PlayCardDestination<Deck>{
public:
    ~Board() = default;
    Board() = default;

    void add_card_to(Card *, int);
private:
    Card *card1_{nullptr};
    Card *card2_{nullptr};
};


#endif //LAB3_TRAITS_BOARD_H
