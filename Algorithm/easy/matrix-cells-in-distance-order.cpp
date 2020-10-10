//--------------------Description----------
// We are given a matrix with R rows and C columns has cells with integer
// coordinates (r, c), where 0 <= r < R and 0 <= c < C.

// Additionally, we are given a cell in that matrix with coordinates (r0, c0).

// Return the coordinates of all cells in the matrix, sorted by their distance
// from (r0, c0) from smallest distance to largest distance.  Here, the distance
// between two cells (r1, c1) and (r2, c2) is the Manhattan distance, |r1 - r2|
// + |c1 - c2|.  (You may return the answer in any order that satisfies this
// condition.)
//--------------------Results--------------
// Runtime: 88 ms, faster than 61.59% of C++ online submissions for Matrix Cells
// in Distance Order. Memory Usage: 24.7 MB, less than 7.31% of C++ online
// submissions for Matrix Cells in Distance Order.
#include <queue>
#include <vector>
using namespace std;
class Solution {
public:
  // BFS
  vector<vector<int>> allCellsDistOrder(int R, int C, int r0, int c0) {
    vector<vector<bool>> labels(R, vector<bool>(C));
    queue<vector<int>> q;
    vector<vector<int>> rv;
    q.push({r0, c0});
    labels[r0][c0] = true;
    while (!q.empty()) {
      vector<int> head = q.front();
      int x = head[0], y = head[1];
      q.pop();
      rv.push_back(head);

      // deal with four directions
      if (y + 1 < C && labels[x][y + 1] == false) {
        q.push({x, y + 1});
        labels[x][y + 1] = true;
      }
      if (y - 1 >= 0 && labels[x][y - 1] == false) {
        q.push({x, y - 1});
        labels[x][y - 1] = true;
      }
      if (x + 1 < R && labels[x + 1][y] == false) {
        q.push({x + 1, y});
        labels[x + 1][y] = true;
      }
      if (x - 1 >= 0 && labels[x - 1][y] == false) {
        q.push({x - 1, y});
        labels[x - 1][y] = true;
      }
    }
    return rv;
  }
};
