#include <iostream>
#include <vector>

//function is used for introduction
void introduction() {

  std::cout << "Press [Enter] to begin: ";
  std::cin.ignore();

  std::cout << "\n";

  std::cout << "===========\n";
  std::cout << "Tic-Tac-Toe\n";
  std::cout << "===========\n\n";
  
  std::cout << "Player 1) X\n";
  std::cout << "Player 2) O\n\n";

  std::cout << "Here's the 3 x 3 grid:\n\n";

  std::cout << "     |     |      \n";
  std::cout << "  1  |  2  |  3   \n";
  std::cout << "_____|_____|_____ \n";
  std::cout << "     |     |      \n";
  std::cout << "  4  |  5  |  6   \n";
  std::cout << "_____|_____|_____ \n";
  std::cout << "     |     |      \n";
  std::cout << "  7  |  8  |  9   \n";
  std::cout << "     |     |      \n\n\n\n";

}

// function check if there is a winner
bool check_game(std::vector<char> game_board) {
  if ((game_board[0] == 'X' && game_board[4] == 'X' && game_board[8] == 'X') || (game_board[2] == 'X' && game_board[4] == 'X' && game_board[6] == 'X') || (game_board[0] == 'X' && game_board[3] == 'X' && game_board[6] == 'X') || (game_board[1] == 'X' && game_board[4] == 'X' && game_board[7] == 'X') || (game_board[2] == 'X' && game_board[5] == 'X' && game_board[8] == 'X') || (game_board[0] == 'X' && game_board[1] == 'X' && game_board[2] == 'X') || (game_board[3] == 'X' && game_board[4] == 'X' && game_board[5] == 'X') || (game_board[6] == 'X' && game_board[7] == 'X' && game_board[8] == 'X')) {
    return true;
  } else if ((game_board[0] == 'O' && game_board[4] == 'O' && game_board[8] == 'O') || (game_board[2] == 'O' && game_board[4] == 'O' && game_board[6] == 'O') || (game_board[0] == 'O' && game_board[3] == 'O' && game_board[6] == 'O') || (game_board[1] == 'O' && game_board[4] == 'O' && game_board[7] == 'O') || (game_board[2] == 'O' && game_board[5] == 'O' && game_board[8] == 'O') || (game_board[0] == 'O' && game_board[1] == 'O' && game_board[2] == 'O') || (game_board[3] == 'O' && game_board[4] == 'O' && game_board[5] == 'O') || (game_board[6] == 'O' && game_board[7] == 'O' && game_board[8] == 'O')) {
    return true;
  } else {
    return false;
  }
}

//this function displays the board game
void display_game(std::vector<char> game_board) {
  for (int i =0; i < game_board.size(); i++) {
      if (i == 0 || i == 1 || i == 3 || i == 4) {
        std::cout << "_" << game_board[i] << "_|";
      } else if (i == 2 || i == 5){
        std::cout << "_" << game_board[i] << "_\n";
      } else if (i == 6 || i == 7) {
        std::cout << " " << game_board[i] << " |";
      } else {
        std::cout << " " << game_board[i] << " ";
      }
    }
}

//checking to see who won the game
void display_winner(std::vector<char> game_board) {
  //checking diagonal line
  if ((game_board[0] == 'X' && game_board[4] == 'X' && game_board[8] == 'X') || (game_board[2] == 'X' && game_board[4] == 'X' && game_board[6] == 'X') || (game_board[0] == 'X' && game_board[3] == 'X' && game_board[6] == 'X') || (game_board[1] == 'X' && game_board[4] == 'X' && game_board[7] == 'X') || (game_board[2] == 'X' && game_board[5] == 'X' && game_board[8] == 'X') || (game_board[0] == 'X' && game_board[1] == 'X' && game_board[2] == 'X') || (game_board[3] == 'X' && game_board[4] == 'X' && game_board[5] == 'X') || (game_board[6] == 'X' && game_board[7] == 'X' && game_board[8] == 'X')) {
    std::cout << "\n Player 1 Wins! \n";
  } 
  else if((game_board[0] == 'O' && game_board[4] == 'O' && game_board[8] == 'O') || (game_board[2] == 'O' && game_board[4] == 'O' && game_board[6] == 'O') || (game_board[0] == 'O' && game_board[3] == 'O' && game_board[6] == 'O') || (game_board[1] == 'O' && game_board[4] == 'O' && game_board[7] == 'O') || (game_board[2] == 'O' && game_board[5] == 'O' && game_board[8] == 'O') || (game_board[0] == 'O' && game_board[1] == 'O' && game_board[2] == 'O') || (game_board[3] == 'O' && game_board[4] == 'O' && game_board[5] == 'O') || (game_board[6] == 'O' && game_board[7] == 'O' && game_board[8] == 'O')){
    std::cout << "\n Player 2 Wins! \n";
  }
  else {
    std::cout << "\nTie Game!\n";
  }
}