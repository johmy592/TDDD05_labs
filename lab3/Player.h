//
// Created by viktor on 2018-05-08.
//

#ifndef LAB3_PLAYER_H
#define LAB3_PLAYER_H
#include "Deck.h"


class Player {
public:
    Player() = default;
    virtual ~Player() = default;
    void increase_points();
    void draw_cards(int, Deck*);
    void show_hand();
    virtual Card* pick_card() = 0;
    int get_points();
    bool empty_hand();
protected:
    int points_{};
    std::vector<Card*> hand_{};
};


#endif //LAB3_PLAYER_H
