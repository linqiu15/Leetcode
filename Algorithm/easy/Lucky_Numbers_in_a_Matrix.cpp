//--------------------Description----------
// Given a m * n matrix of distinct numbers, return all lucky numbers in the
// matrix in any order.

// A lucky number is an element of the matrix such that it is the minimum
// element in its row and maximum in its column.
//--------------------Results--------------
// Runtime: 72 ms, faster than 22.13% of C++ online submissions for Lucky
// Numbers in a Matrix. Memory Usage: 11.8 MB, less than 29.38% of C++ online
// submissions for Lucky Numbers in a Matrix.

#include <vector>
using namespace std;

class Solution {
public:
  vector<int> luckyNumbers(vector<vector<int>> &matrix) {
    int row = matrix.size(), column = matrix[0].size();
    vector<int> rowindex, columnindex, rarray;
    // find out all minimum number in each row
    for (int i = 0; i < row; i++) {
      int tmpindex = 0;
      for (int j = 1; j < column; j++) {
        if (matrix[i][j] < matrix[i][tmpindex]) {
          tmpindex = j;
        }
      }
      rowindex.push_back(tmpindex);
    }
    // find out all maximum number in each column
    for (int j = 0; j < column; j++) {
      int tmpindex = 0;
      for (int i = 1; i < row; i++) {
        if (matrix[i][j] > matrix[tmpindex][j]) {
          tmpindex = i;
        }
      }
      columnindex.push_back(tmpindex);
    }

    // find out the possible number meeting the criteria
    for (int i = 0; i < row; i++) {
      if (i == columnindex[rowindex[i]]) {
        rarray.push_back(matrix[i][rowindex[i]]);
      }
    }

    return rarray;
  }
};
