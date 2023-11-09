#include <iostream>
#include <vector>
#include <string>

using namespace std;
//TASK 3 
vector<vector<string>> board = {{"1", "2", "3"}, {"4", "5", "6"}, {"7", "8", "9"}};

void display_board() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << board[i][j] << " ";
        }
     
        cout << endl;
    }
}

bool check_winner(string player) {
   
    return (board[0][0] == player && board[0][1] == player && board[0][2] == player) ||
           (board[1][0] == player && board[1][1] == player && board[1][2] == player) ||
           (board[2][0] == player && board[2][1] == player && board[2][2] == player) ||
           (board[0][0] == player && board[1][0] == player && board[2][0] == player) ||
           (board[0][1] == player && board[1][1] == player && board[2][1] == player) ||
           (board[0][2] == player && board[1][2] == player && board[2][2] == player) ||
           (board[0][0] == player && board[1][1] == player && board[2][2] == player) ||
           (board[0][2] == player && board[1][1] == player && board[2][0] == player);
}

int main() {
    string player = "X";
    int move;
    bool game_over = false;

    while (!game_over) {
        display_board();
        cout << "Player " << player << ", enter your move (1-9): ";
        cin >> move;

      
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (board[i][j] == to_string(move)) {
                    board[i][j] = player;
                }
            }
        }

       
        if (check_winner(player)) {
            display_board();
            cout << "Player " << player << " wins!" << endl;
            game_over = true;
        } else {
        
            bool is_draw = true;
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    if (board[i][j] != "X" && board[i][j] != "O") {
                        is_draw = false;
                    }
                }
            }
            if (is_draw) {
                display_board();
                cout << "It's a draw!" << endl;
                game_over = true;
            } else {
                
                if (player == "X") {
                    player = "O";
                } else {
                    player = "X";
                }
            }
        }
    }

    return 0;
}