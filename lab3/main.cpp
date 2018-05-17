#include <iostream>
#include "Board.h"
#include "HumanPlayer.h"
#include "AIPlayer.h"
#include <string.h>
using namespace std;

int main() {
    HumanPlayer* human_player = new HumanPlayer();
    AIPlayer* AI_player = new AIPlayer();
    Board board = Board(human_player, AI_player);
    Deck deck = Deck();
    human_player->draw_cards(3, &deck);
    AI_player->draw_cards(3, &deck);
    std::cout << "Game Start!" << std::endl;

    while(true){
        human_player->show_hand();

        board.set_cards(human_player->pick_card(), AI_player->pick_card());

        board.evaluate_round();

        int player1_points = human_player->get_points();
        int player2_points = AI_player->get_points();
        if(deck.is_empty() && human_player->empty_hand() && AI_player->empty_hand() && player1_points > player2_points){
            std::cout << "Player1 WINS with " << human_player->get_points() << " points!" <<std::endl;
            break;
        }
        if(deck.is_empty() && human_player->empty_hand() && AI_player->empty_hand() && player2_points > player1_points){
            std::cout << "Player2 WINS with " << AI_player->get_points() << " points!" <<std::endl;
            break;
        }
        if(deck.is_empty() && human_player->empty_hand() && AI_player->empty_hand() && player2_points == player1_points) {
            std::cout << "Game is a draw!" << std::endl;
            break;
        }
            //Draw new cards from deck if not empty.
        if(!deck.is_empty()) {
            human_player->draw_cards(1, &deck);
            AI_player->draw_cards(1, &deck);
        }
    }
}
