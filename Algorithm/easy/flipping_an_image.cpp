//--------------------Description----------
// Given a binary matrix A, we want to flip the image horizontally, then invert
// it, and return the resulting image.

// To flip an image horizontally means that each row of the image is reversed.
// For example, flipping [1, 1, 0] horizontally results in [0, 1, 1].

// To invert an image means that each 0 is replaced by 1, and each 1 is replaced
// by 0. For example, inverting [0, 1, 1] results in [1, 0, 0].
//--------------------Results--------------
// Runtime: 8 ms, faster than 87.02% of C++ online submissions for Flipping an
// Image. Memory Usage: 8.9 MB, less than 55.73% of C++ online submissions for
// Flipping an Image.
#include <vector>
using namespace std;

class Solution {
public:
  vector<vector<int>> flipAndInvertImage(vector<vector<int>> &A) {
    int row = int(A.size()), column = int(A[0].size());
    for (int i = 0; i < row; i++) {
      for (int j = 0; j < column / 2; j++) {
        if (A[i][j] == A[i][column - j - 1]) {
          A[i][j] = 1 - A[i][j];
          A[i][column - j - 1] = 1 - A[i][column - j - 1];
        }
      }
    }
    if (column % 2 == 1) {
      for (int i = 0; i < row; i++) {
        A[i][column / 2] = 1 - A[i][column / 2];
      }
    }
    return A;
  }
};
