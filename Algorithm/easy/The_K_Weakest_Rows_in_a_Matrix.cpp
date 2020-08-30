//--------------------Description----------
// Given a m * n matrix mat of ones (representing soldiers) and zeros
// (representing civilians), return the indexes of the k weakest rows in the
// matrix ordered from the weakest to the strongest.

// A row i is weaker than row j, if the number of soldiers in row i is less than
// the number of soldiers in row j, or they have the same number of soldiers but
// i is less than j. Soldiers are always stand in the frontier of a row, that
// is, always ones may appear first and then zeros.
//--------------------Results--------------
// Runtime: 32 ms, faster than 47.48% of C++ online submissions for The K
// Weakest Rows in a Matrix. Memory Usage: 10.5 MB, less than 91.18% of C++
// online submissions for The K Weakest Rows in a Matrix.
#include <vector>
using namespace std;

class Solution {
public:
  vector<int> kWeakestRows(vector<vector<int>> &mat, int k) {
    int row = mat.size(), column = mat[0].size();
    vector<int> power;
    for (int i = 0; i < row; i++) {
      int j = 0;
      for (; j < column && mat[i][j] == 1; j++) {
      }
      power.push_back(j);
    }

    vector<int> indices;
    int count = 0;

    for (int i = 0; i <= column && count < k; i++) {
      for (int j = 0; j < row && count < k; j++) {
        if (power[j] == i) {
          count++;
          indices.push_back(j);
        }
      }
    }
    return indices;
  }
};
