//--------------------Description----------
// Given an array A of non-negative integers, return an array consisting of all
// the even elements of A, followed by all the odd elements of A.

// You may return any answer array that satisfies this condition.
//--------------------Results--------------
// Runtime: 20 ms, faster than 67.05% of C++ online submissions for Sort Array
// By Parity. Memory Usage: 16.5 MB, less than 30.31% of C++ online submissions
// for Sort Array By Parity.
#include <vector>
using namespace std;

class Solution {
public:
  vector<int> sortArrayByParity(vector<int> &A) {
    int i = 0, j = A.size() - 1;
    while (i < j) {
      if (A[i] % 2 != 0) {
        int tmp = A[j];
        A[j] = A[i];
        A[i] = tmp;
        j--;
      } else {
        i++;
      }
    }
    return A;
  }
};

// point:用两个“指针”交换操作
