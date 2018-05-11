//
// Created by johannes on 4/26/18.
//

#ifndef LAB3_TRAITS_PLAYER_H
#define LAB3_TRAITS_PLAYER_H

#include <iostream>
#include "Card.h"
#include "Deck.h"
#include "DrawCardDestination.h"
#include "GameParticipant.h"
#include <vector>

class Player :  public DrawCardDestination<Player>, public PlayCardSource<Player>,public GameParticipant<Player>{
public:
    ~Player() = default;
    Player() = default;
    Player(int id) : id_{id} {}

    void add_card(Card *c);
    void increase_points(int);

    int get_points();
    Card *remove_card_at(int);

    void print_hand();
    bool has_cards();

    virtual int make_move() = 0;
private:
    std::vector<Card*> hand_{};
    int points_{};
    int id_;
};


#endif //LAB3_TRAITS_PLAYER_H
