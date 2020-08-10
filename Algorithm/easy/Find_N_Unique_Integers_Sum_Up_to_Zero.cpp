//--------------------Description----------
// Given an integer n, return any array containing n unique integers such that
// they add up to 0.
//--------------------Results--------------
// Runtime: 4 ms, faster than 42.06% of C++ online submissions for Find N Unique
// Integers Sum up to Zero. Memory Usage: 6.7 MB, less than 67.00% of C++ online
// submissions for Find N Unique Integers Sum up to Zero.

#include <vector>
using namespace std;

class Solution {
public:
  vector<int> sumZero(int n) {
    vector<int> array;
    for (int i = 0; i < n / 2; i++) {
      array.push_back(i + 1);
      array.push_back(-i - 1);
    }
    if (n % 2 != 0)
      array.push_back(0);
    return array;
  }
};
