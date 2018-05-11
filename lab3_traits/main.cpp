#include <iostream>
#include "Deck.h"
#include "Player.h"
#include "DrawCardContext.h"
#include "Board.h"
#include "AIPlayer.h"
#include "ResolveTurnContext.h"


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
    Player *p1 = new AIPlayer(1);
    Player *p2 = new AIPlayer(2);
    Board *board = new Board();

    board->print_board();
    DrawCardContext *useCase = new DrawCardContext(deck1, p1);
    useCase->execute_context();

    DrawCardContext *useCase2 = new DrawCardContext(deck2, p2);
    useCase2->execute_context();

    p1->print_hand();
    p2->print_hand();
    board->print_board();

    PlayCardContext *useCase3 = new PlayCardContext(p1, board);
    useCase3->execute_context(1);

    PlayCardContext *useCase4 = new PlayCardContext(p2, board);
    useCase4->execute_context(2);

    board->print_board();
    ResolveTurnContext *useCase5 = new ResolveTurnContext(p1,p2,board);
    useCase5->execute_context();

    board->print_board();

    return 0;
}

