#include <iostream>
#include "Deck.h"
#include "Player.h"
#include "DrawCardContext.h"
#include "Board.h"
#include "AIPlayer.h"
#include "ResolveTurnContext.h"
#include "HumanPlayer.h"
#include "CheckGameoverContext.h"


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
    Deck *deck1 = make_test_deck();
    Deck *deck2 = make_test_deck();
    Player *p1 = new HumanPlayer(1);
    Player *p2 = new AIPlayer(2);
    Board *board = new Board();

    DrawCardContext *dcc1 = new DrawCardContext(deck1,p1);
    dcc1->execute_context(3);
    DrawCardContext *dcc2 = new DrawCardContext(deck2,p2);
    dcc2->execute_context(3);
    delete(dcc1);
    delete(dcc2);
    std::cout << "Game Start!\n";
    PlayCardContext *pcc1;
    PlayCardContext *pcc2;
    ResolveTurnContext *rcc;
    CheckGameoverContext *cgc;
    while(true)
    {
        dcc1 = new DrawCardContext(deck1,p1);
        dcc1->execute_context(1);
        dcc2 = new DrawCardContext(deck2,p2);
        dcc2->execute_context(1);

        pcc1 = new PlayCardContext(p1,board);
        pcc1->execute_context(1);
        pcc2 = new PlayCardContext(p2,board);
        pcc2->execute_context(2);

        rcc = new ResolveTurnContext(p1,p2,board);
        rcc->execute_context();

        cgc = new CheckGameoverContext(p1,p2);
        if(cgc->execute_context())
            break;
        delete(dcc1);
        delete(dcc2);
        delete(pcc1);
        delete(pcc2);
        delete(rcc);
        delete(cgc);
    }
    return 0;
}

