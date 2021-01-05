//--------------------Description----------
// Let's call an array A a mountain if the following properties hold:
// A.length >= 3
// There exists some 0 < i < A.length - 1 such that A[0] < A[1] < ... A[i-1] <
// A[i] > A[i+1] > ... > A[A.length - 1] Given an array that is definitely a
// mountain, return any i such that A[0] < A[1] < ... A[i-1] < A[i] > A[i+1] >
// ... > A[A.length - 1].
//--------------------Results--------------
// Runtime: 24 ms, faster than 75.32% of C++ online submissions for Peak Index
// in a Mountain Array. Memory Usage: 11.6 MB, less than 58.56% of C++ online
// submissions for Peak Index in a Mountain Array.

#include <vector>
using namespace std;

class Solution {
public:
  int peakIndexInMountainArray(vector<int> &A) {
    // using binary search
    int left = 0, right = A.size() - 1;
    while (left < right) {
      int mid = (left + right) / 2;
      // choose the relatively larger one
      if (A[mid] < A[mid + 1]) {
        left = mid + 1;
      } else {
        right = mid;
      }
    }
    return left;
  }
};
