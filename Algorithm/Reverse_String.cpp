//--------------------Description----------
// Write a function that reverses a string. The input string is given as an
// array of characters char[].

// Do not allocate extra space for another array, you must do this by modifying
// the input array in-place with O(1) extra memory.

// You may assume all the characters consist of printable ascii characters.
//--------------------Results--------------
// Runtime: 52 ms, faster than 63.09% of C++ online submissions for Reverse
// String. Memory Usage: 23.2 MB, less than 92.44% of C++ online submissions for
// Reverse String.

#include <vector>
using namespace std;

class Solution {
public:
  void reverseString(vector<char> &s) {
    int len = s.size();
    for (int i = 0; i < len / 2; i++) {
      char tmpchar = s[i];
      s[i] = s[len - i - 1];
      s[len - i - 1] = tmpchar;
    }
  }
};
