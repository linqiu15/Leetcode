//--------------------Description----------
// Given a string, you need to reverse the order of characters in each word
// within a sentence while still preserving whitespace and initial word order.
//--------------------Results--------------
// Runtime: 56 ms, faster than 71.30% of C++ online submissions for Reverse
// Words in a String III. Memory Usage: 10.8 MB, less than 49.81% of C++ online
// submissions for Reverse Words in a String III.
#include <algorithm>
#include <string>
using namespace std;
class Solution {
public:
  string reverseWords(string s) {
    int len = s.size();
    int start = 0, end = 0;
    while (end <= len) {
      if (end < len && s[end] != ' ') {
        end++;
      } else {
        string substr = s.substr(start, end - start);
        reverse(substr.begin(), substr.end());
        s.replace(start, end - start, substr);
        end++;
        start = end;
      }
    }
    return s;
  }
};
