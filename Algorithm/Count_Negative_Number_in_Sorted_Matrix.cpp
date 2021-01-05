//--------------------Description----------
// Given a m * n matrix grid which is sorted in non-increasing order both
// row-wise and column-wise. Return the number of negative numbers in grid.
//--------------------Results--------------
// Runtime: 32 ms, faster than 95.86% of C++ online submissions for Count
// Negative Numbers in a Sorted Matrix. Memory Usage: 10.6 MB, less than 65.96%
// of C++ online submissions for Count Negative Numbers in a Sorted Matrix.

#include <vector>
using namespace std;
class Solution {
public:
  int countNegatives(vector<vector<int>> &grid) {
    int count = 0;
    int row = grid.size(), column = grid[0].size();
    for (int i = 0; i < row; i++) {
      int j = 0;
      while (j < column && grid[i][j] >= 0) {
        j++;
      }
      count += column - j;
    }
    return count;
  }
};
