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
    while(true){
        //Print human_player cards
        std::cout << "Hooman! Choose your move!" << std::endl;
        human_player->show_hand();
        //human_player choose card to play
        board.set_cards(human_player->pick_card(), AI_player->pick_card());
        cout << "AI chose a card from its hand." << endl;
        //Bord evaluate and remove cards
        board.evaluate_round();
        //Print Winner and points.
        int player1_points = human_player->get_points();
        int player2_points = AI_player->get_points();
        if(deck.is_empty() && human_player->empty_hand() && AI_player->empty_hand() && player1_points > player2_points){
            std::cout << "HOOMAN WON!!!!!!!! Congratz ez pz!"<<std::endl;
            break;
        }
        if(deck.is_empty() && human_player->empty_hand() && AI_player->empty_hand() && player2_points > player1_points){
            std::cout << "AI WON!!!!!!!! Congratz ez pz!"<<std::endl;
            break;
        }
        if(deck.is_empty() && human_player->empty_hand() && AI_player->empty_hand() && player2_points == player1_points) {
            std::cout << "Game is a DRAAAAAW!" << std::endl;
            break;
        }
            //Draw new cards from deck if not empty.
        if(!deck.is_empty()) {
            std::cout << "HOOMAN draws a new card from the deck." << std::endl;
            human_player->draw_cards(1, &deck);
            std::cout << "AI draws a new card from the deck." << std::endl;
            AI_player->draw_cards(1, &deck);
        }
    }
}
