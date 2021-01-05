//--------------------Description----------
// Given an integer n, return a string with n characters such that each
// character in such string occurs an odd number of times.

// The returned string must contain only lowercase English letters. If there are
// multiples valid strings, return any of them.
//--------------------Results--------------
// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Generate a
// String With Characters That Have Odd Counts. Memory Usage: 6.5 MB, less
// than 31.21% of C++ online submissions for Generate a String With Characters
// That Have Odd Counts.
#include <string>
using namespace std;

class Solution {
public:
  string generateTheString(int n) {
    if (n % 2 != 0) {
      string str(n, 'a');
      return str;
    }
    string str(n - 1, 'a');
    str.push_back('b');
    return str;
  }
};
