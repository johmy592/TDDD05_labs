#include <iostream>
#include "Deck.h"
#include "Player.h"
#include "DrawCardContext.h"


Deck *make_test_deck()
{
    std::vector<Card*> cards;
    for(int i = 0; i < 10; ++i)
    {
        Card *c = new Card(i);
        cards.push_back(c);
    }
    return new Deck(cards);
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    Deck *deck = make_test_deck();
    Player *p1 = new Player(1);
    p1->print_hand();
    DrawCardContext *useCase = new DrawCardContext(deck, p1);
    useCase->execute_context();
    p1->print_hand();
    return 0;
}

