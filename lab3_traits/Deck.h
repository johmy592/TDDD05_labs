//
// Created by johannes on 4/26/18.
//

#ifndef LAB3_TRAITS_DECK_H
#define LAB3_TRAITS_DECK_H
#include "Card.h"
#include "DrawCardDestination.h"
#include "PlayCardSource.h"
#include <vector>
class Deck : public DrawCardSource<Deck> {
public:
    ~Deck() = default;
    Deck() = default;
    Deck(std::vector<Card*> cards) : cards_{cards} {}

    Card *pop_card();
    Card *remove_card_at(int);
    void add_card(Card *card);
private:
    std::vector<Card*> cards_;
};


#endif //LAB3_TRAITS_DECK_H
