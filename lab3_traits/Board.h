//
// Created by johannes on 4/26/18.
//

#ifndef LAB3_TRAITS_BOARD_H
#define LAB3_TRAITS_BOARD_H

#include "Card.h"
#include "Player.h"
#include "GamePlayingField.h"

class Board : public PlayCardDestination<Deck>, public GamePlayingField<Board>{
public:
    ~Board() = default;
    Board() = default;

    Card *get_c1();
    Card *get_c2();

    void add_card_to(Card *, int);
    void print_board();
    void clear_board();
private:
    Card *card1_{nullptr};
    Card *card2_{nullptr};
};


#endif //LAB3_TRAITS_BOARD_H
