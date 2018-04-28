//
// Created by viktor on 2018-04-26.
//

#ifndef LAB3_PLAYER_H
#define LAB3_PLAYER_H


#include "Card.h"
#include "Deck.h"

class Player {
public:
    Player() = default;
    void increase_points();
    void draw_cards(int, Deck*);
    void show_hand();
    Card* pick_card(int index);
    int get_points();
    bool empty_hand();
private:
    int points_{};
    std::vector<Card*> hand_{};
};


#endif //LAB3_PLAYER_H
