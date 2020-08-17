//--------------------Description----------
// Given an array of integers A sorted in non-decreasing order, return an array
// of the squares of each number, also in sorted non-decreasing order.
//--------------------Results--------------
// Runtime: 60 ms, faster than 88.64% of C++ online submissions for Squares of a
// Sorted Array. Memory Usage: 27 MB, less than 12.12% of C++ online submissions
// for Squares of a Sorted Array.
#include <vector>
using namespace std;

class Solution {
public:
  vector<int> sortedSquares(vector<int> &A) {
    int len = A.size(), sep = 0;
    while (sep < len && A[sep] < 0) {
      sep++;
    }
    for (int i = 0; i < len; i++) {
      A[i] = A[i] * A[i];
    }
    if (sep == 0 || sep == len)
      return A;
    vector<int> B;
    int front = sep - 1, end = sep;
    while (front >= 0 && end < len) {
      if (A[front] > A[end]) {
        B.push_back(A[end++]);
      } else {
        B.push_back(A[front--]);
      }
    }
    while (front >= 0)
      B.push_back(A[front--]);
    while (end < len)
      B.push_back(A[end++]);
    return B;
  }
};

// point:双指针
