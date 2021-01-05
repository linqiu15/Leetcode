//--------------------Description----------
// On an 8 x 8 chessboard, there is one white rook.  There also may be empty
// squares, white bishops, and black pawns.  These are given as characters 'R',
// '.', 'B', and 'p' respectively. Uppercase characters represent white pieces,
// and lowercase characters represent black pieces.

// The rook moves as in the rules of Chess: it chooses one of four cardinal
// directions (north, east, west, and south), then moves in that direction until
// it chooses to stop, reaches the edge of the board, or captures an opposite
// colored pawn by moving to the same square it occupies.  Also, rooks cannot
// move into the same square as other friendly bishops.

// Return the number of pawns the rook can capture in one move.
//--------------------Results--------------
// Runtime: 4 ms, faster than 49.19% of C++ online submissions for Available
// Captures for Rook. Memory Usage: 7 MB, less than 100.00% of C++ online
// submissions for Available Captures for Rook.
#include <vector>
using namespace std;

class Solution {
public:
  int numRookCaptures(vector<vector<char>> &board) {
    int count = 0;
    // find the white rook
    int x, y;
    for (int i = 0; i < 8; i++) {
      for (int j = 0; j < 8; j++) {
        if (board[i][j] == 'R') {
          x = i;
          y = j;
          i = 8;
          j = 8;
        }
      }
    }

    // four directions
    int currentx, currenty;
    currentx = x;
    currenty = y;
    while (currentx + 1 < 8 && board[currentx + 1][currenty] == '.') {
      currentx++;
    }
    count += (int)(currentx + 1 < 8 && board[currentx + 1][currenty] == 'p');

    currentx = x;
    currenty = y;
    while (currentx - 1 >= 0 && board[currentx - 1][currenty] == '.') {
      currentx--;
    }
    count += (int)(currentx - 1 >= 0 && board[currentx - 1][currenty] == 'p');

    currentx = x;
    currenty = y;
    while (currenty + 1 < 8 && board[currentx][currenty + 1] == '.') {
      currenty++;
    }
    count += (int)(currenty + 1 < 8 && board[currentx][currenty + 1] == 'p');

    currentx = x;
    currenty = y;
    while (currenty - 1 >= 0 && board[currentx][currenty - 1] == '.') {
      currenty--;
    }
    count += (int)(currenty - 1 >= 0 && board[currentx][currenty - 1] == 'p');

    return count;
  }
};
