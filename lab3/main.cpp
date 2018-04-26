#include <iostream>
#include "Board.h"

int main() {
    Player player1 = Player();
    Player player2 = Player();
    Board board = Board(player1, player2);
    Deck deck = Deck();
    player1.draw_cards(3, &deck);
    player2.draw_cards(3, &deck);
    while(true){
        //Print player1 cards
        player1.show_hand();
        //player1 choose card to play
        int player1_choice;
        std::cin >> player1_choice;
        //Print player2 cards
        player2.show_hand();
        //player2 choose card to play
        int player2_choice;
        std::cin >> player2_choice;
        board.set_cards(player1.pick_card(player1_choice), player2.pick_card(player2_choice));
        //Bord evaluate and remove cards
        board.evaluate_round();
        //Print Winner and points.
        int player1_points = player1.get_points();
        int player2_points = player2.get_points();
        if(player1_points > 9){
            std::cout << "PLAYER 1 WON!!!!!!!! Congratz ez pz!"<<std::endl;
            break;
        }
        if(player2_points > 9){
            std::cout << "PLAYER 2 WON!!!!!!!! Congratz ez pz!"<<std::endl;
            break;
        }
    }
}
