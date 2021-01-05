//--------------------Description----------
// Given a function  f(x, y) and a value z, return all positive integer pairs x
// and y where f(x,y) == z.

// The function is constantly increasing, i.e.:

// f(x, y) < f(x + 1, y)
// f(x, y) < f(x, y + 1)
// The function interface is defined like this:

// interface CustomFunction {
// public:
//   // Returns positive integer f(x, y) for any given positive integer x and y.
//   int f(int x, int y);
// };
// For custom testing purposes you're given an integer function_id and a target
// z as input, where function_id represent one function from an secret internal
// list, on the examples you'll know only two functions from the list.

// You may return the solutions in any order.
//--------------------Results--------------
// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Find
// Positive Integer Solution for a Given Equation. Memory Usage: 6.2 MB, less
// than 94.45% of C++ online submissions for Find Positive Integer Solution for
// a Given Equation.
#include <vector>
using namespace std;

// This is the custom function interface.
// You should not implement it, or speculate about its implementation
class CustomFunction {
public:
  // Returns f(x, y) for any given positive integers x and y.
  // Note that f(x, y) is increasing with respect to both x and y.
  // i.e. f(x, y) < f(x + 1, y), f(x, y) < f(x, y + 1)
  int f(int x, int y);
};

class Solution {
public:
  vector<vector<int>> findSolution(CustomFunction &customfunction, int z) {
    // Binary Search
    int len = 1000;
    vector<vector<int>> vec;
    for (int i = 1; i <= len; i++) {
      int j = 1, k = len;
      if (customfunction.f(i, j) > z || customfunction.f(i, k) < z)
        continue;
      while (j < k) {
        int mid = (j + k) / 2, tmp = customfunction.f(i, mid);
        if (tmp == z) {
          vec.push_back({i, mid});
          break;
        } else if (tmp > z) {
          k = mid;
        } else {
          j = mid + 1;
        }
      }
    }
    return vec;
  }
};

// point1:k=mid rather mid-1
// point2:think it from machine's spective,not mathwmatically!
