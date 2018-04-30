//
// Created by johannes on 4/26/18.
//

#ifndef LAB3_TRAITS_PLAYER_H
#define LAB3_TRAITS_PLAYER_H

#include "Card.h"
#include "Deck.h"
#include <vector>

class Player {
public:
    ~Player() = default;
    Player() = default;

    void add_card(Card *c);
    void increase_points(int);

    int get_points();
    Card *remove_card_at(int);
private:
    std::vector<Card*> hand_{};
    int points_{};
};


#endif //LAB3_TRAITS_PLAYER_H
