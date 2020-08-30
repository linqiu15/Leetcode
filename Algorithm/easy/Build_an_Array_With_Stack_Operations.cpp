//--------------------Description----------
// Given an array target and an integer n. In each iteration, you will read a
// number from  list = {1,2,3..., n}.

// Build the target array using the following operations:

// Push: Read a new element from the beginning list, and push it in the array.
// Pop: delete the last element of the array.
// If the target array is already built, stop reading more elements.
// You are guaranteed that the target array is strictly increasing, only
// containing numbers between 1 to n inclusive.

// Return the operations to build the target array.

// You are guaranteed that the answer is unique.
//--------------------Results--------------
// Runtime: 4 ms, faster than 65.23% of C++ online submissions for Build an
// Array With Stack Operations. Memory Usage: 8.1 MB, less than 12.79% of C++
// online submissions for Build an Array With Stack Operations.
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
  vector<string> buildArray(vector<int> &target, int n) {
    vector<string> vec;
    int len = target.size(), i = 0, j = 1;
    while (i < len && j <= n) {
      if (target[i] == j) {
        vec.push_back("Push");
        i++;
      } else {
        vec.push_back("Push");
        vec.push_back("Pop");
      }
      j++;
    }
    return vec;
  }
};
