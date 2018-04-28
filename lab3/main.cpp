#include <iostream>
#include "Board.h"
#include <string.h>

int main() {
    Player player1 = Player();
    Player player2 = Player();
    Board board = Board(player1, player2);
    Deck deck = Deck();
    player1.draw_cards(3, &deck);
    player2.draw_cards(3, &deck);
    while(true){
        //Print player1 cards
        std::cout << "Player1. Choose your move!" << std::endl;
        player1.show_hand();
        //player1 choose card to play
        std::string player1_choice;
        std::getline(std::cin, player1_choice);
        //Print player2 cards
        std::cout << "Player2. Choose your move!" << std::endl;
        player2.show_hand();
        //player2 choose card to play
        std::string player2_choice;
        std::getline(std::cin, player2_choice);
        board.set_cards(player1.pick_card(std::stoi(player1_choice)), player2.pick_card(std::stoi(player2_choice)));
        //Bord evaluate and remove cards
        board.evaluate_round();
        //Print Winner and points.
        int player1_points = player1.get_points();
        int player2_points = player2.get_points();
        if(deck.is_empty() && player1.empty_hand() && player2.empty_hand() && player1_points > player2_points){
            std::cout << "PLAYER 1 WON!!!!!!!! Congratz ez pz!"<<std::endl;
            break;
        }
        if(deck.is_empty() && player1.empty_hand() && player2.empty_hand() && player2_points > player1_points){
            std::cout << "PLAYER 2 WON!!!!!!!! Congratz ez pz!"<<std::endl;
            break;
        }
        if(deck.is_empty() && player1.empty_hand() && player2.empty_hand() && player2_points == player1_points) {
            std::cout << "Game is a DRAAAAAW!" << std::endl;
            break;
        }
            //Draw new cards from deck if not empty.
        if(!deck.is_empty()) {
            std::cout << "Player1 draws a new card from the deck." << std::endl;
            player1.draw_cards(1, &deck);
            std::cout << "Player2 draws a new card from the deck." << std::endl;
            player2.draw_cards(1, &deck);
        }
    }
}
