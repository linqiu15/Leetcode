//--------------------Description----------
// We are given an array A of N lowercase letter strings, all of the same
// length.
// Now, we may choose any set of deletion indices, and for each string, we
// delete all the characters in those indices.
// For example, if we have an array A = ["abcdef","uvwxyz"] and deletion indices
// {0, 2, 3}, then the final array after deletions is ["bef", "vyz"], and the
// remaining columns of A are ["b","v"], ["e","y"], and ["f","z"].  (Formally,
// the c-th column is [A[0][c], A[1][c], ..., A[A.length-1][c]]).
// Suppose we chose a set of deletion indices D such that after deletions, each
// remaining column in A is in non-decreasing sorted order.
// Return the minimum possible value of D.length.
//--------------------Results--------------
// Runtime: 80 ms, faster than 77.47% of C++ online submissions for Delete
// Columns to Make Sorted. Memory Usage: 12.4 MB, less than 22.53% of C++ online
// submissions for Delete Columns to Make Sorted.
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
  int minDeletionSize(vector<string> &A) {
    int num = 0, row = A.size(), column = A[0].length();
    for (int i = 0; i < column; i++) {
      int j = 0, k = 1;
      for (; k < row && A[j][i] <= A[k][i]; j++, k++) {
      }
      num += (k == row);
    }
    return column - num;
  }
};
