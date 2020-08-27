//--------------------Description----------
// Given an array A of non-negative integers, half of the integers in A are odd,
// and half of the integers are even.

// Sort the array so that whenever A[i] is odd, i is odd; and whenever A[i] is
// even, i is even.

// You may return any answer array that satisfies this condition.
//--------------------Results--------------
// Runtime: 48 ms, faster than 59.95% of C++ online submissions for Sort Array
// By Parity II. Memory Usage: 21.5 MB, less than 78.60% of C++ online
// submissions for Sort Array By Parity II.
#include <vector>
using namespace std;

class Solution {
public:
  vector<int> sortArrayByParityII(vector<int> &A) {
    int len = A.size();
    for (int i = 0; i < len; i++) {
      if (i % 2 == 0) {
        // for the even
        if (A[i] % 2 != 0) {
          int j = i + 1;
          for (; j < len && A[j] % 2 != 0; j++) {
          }
          int tmp = A[j];
          A[j] = A[i];
          A[i] = tmp;
        }
      } else {
        if (A[i] % 2 == 0) {
          int j = i + 1;
          for (; j < len && A[j] % 2 == 0; j++) {
          }
          int tmp = A[j];
          A[j] = A[i];
          A[i] = tmp;
        }
      }
    }
    return A;
  }
};
