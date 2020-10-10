//--------------------Description----------
// The Fibonacci numbers, commonly denoted F(n) form a sequence, called the Fibonacci sequence, such that each number is the sum of the two preceding ones, starting from 0 and 1. That is,

// F(0) = 0,   F(1) = 1
// F(N) = F(N - 1) + F(N - 2), for N > 1.

// Given N, calculate F(N).
//--------------------Results--------------
// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Fibonacci Number.
// Memory Usage: 6.2 MB, less than 100.00% of C++ online submissions for Fibonacci Number.
#include <iostream>
using namespace std;

class Solution {
public:
  int fib(int N) {
    int a = 0, b = 1;
    while (N > 0) {
      int tmp = a + b;
      a = b;
      b = tmp;
      N--;
    }
    return a;
  }
};
