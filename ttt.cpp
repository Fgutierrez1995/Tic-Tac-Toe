#include <iostream>
#include "functions.hpp"
#include <vector>



int main() {
	
	introduction();
    
	//starting empty board 
    std::vector<char> game_board(9);
    bool game_over = false;
    int inputs = 0;
    while (inputs != 9 && !game_over) {
      char letter;
      int placement;
      display_game(game_board);
      if (inputs % 2 == 0) {
      	letter = 'X';
      	std::cout << "\n\nEnter placement 1 - 9\n\n";
      	std::cin >> placement;
      	placement = placement - 1;
      	game_board[placement] = letter;
	  } else {
	  	letter = 'O';
	  	std::cout << "\n\nEnter placement 1 - 9\n\n";
      	std::cin >> placement;
      	placement = placement - 1;
      	game_board[placement] = letter;

	  }
	  

      inputs++;
      game_over = check_game(game_board);
    }



    display_game(game_board);
    display_winner(game_board);
    

}