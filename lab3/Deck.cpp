//
// Created by viktor on 2018-04-26.
//

#include <cstdlib>
#include <random>
#include <list>
#include <iostream>
#include "Deck.h"

Deck::Deck() {
    for (int i=0; i < 10; ++i){
        int value = rand() % 10+1;
        deck->push_back(new Card(value));
    }
}

Card* Deck::pop_card() {
        Card* card = deck->back();
        deck->pop_back();
        return card;
}

bool Deck::is_empty() {
    return deck->empty();
}