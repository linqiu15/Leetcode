// Runtime: 52 ms, faster than 35.61% of C++ online submissions for Longest
// Substring Without Repeating Characters. Memory Usage: 7.2 MB, less
// than 96.64% of C++ online submissions for Longest Substring Without Repeating
// Characters.

#include <set>
#include <string>
using namespace std;

class Solution {
public:
  // bool isrepeated(string s) {
  //   set<char> set;
  //   for (int i = 0; i < s.length(); i++) {
  //     set.insert(s[i]);
  //   }
  //   return s.length() != set.size();
  // }

  // // recursive way:too slow
  // int lengthOfLongestSubstring(string s) {
  //   int len = s.length();
  //   if (!isrepeated(s))
  //     return len;
  //   return max(lengthOfLongestSubstring(s.substr(0, len - 1)),
  //              lengthOfLongestSubstring(s.substr(1, len - 1)));
  // }

  // // traversal:passed but took too long
  // int lengthOfLongestSubstring(string s) {
  //   int maxlen = 0, len = s.length();
  //   for (int i = 0; i < len; i++) {
  //     set<char> myset;
  //     bool flag = true;
  //     myset.insert(s[i]);
  //     int j = i + 1;
  //     while (flag && j < len) {
  //       if (myset.find(s[j]) == myset.end()) {
  //         myset.insert(s[j++]);
  //       } else {
  //         flag = false;
  //       }
  //     }
  //     maxlen = max(maxlen, j - i);
  //   }

  //   return maxlen;
  // }

  // // sliding window with set:passed but took too long
  // int lengthOfLongestSubstring(string s) {
  //   int len = s.length(), maxlen = 0;
  //   for (int i = 0; i < len;) {
  //     set<char> set;
  //     int j = i;
  //     while (j < len && set.find(s[j]) == set.end()) {
  //       set.insert(s[j++]);
  //     }
  //     if (j == len)
  //       return max(maxlen, j - i);

  //     int k = j - 1;
  //     while (s[k] != s[j]) {
  //       k--;
  //     }
  //     maxlen = max(maxlen, j - i);
  //     i = k + 1;
  //   }
  //   return maxlen;
  // }

  // sliding windows without set
  int lengthOfLongestSubstring(string s) {
    int len = s.length(), maxlen = 0;
    for (int i = 0; i < len;) {
      int j = i + 1, k;
      while (j < len && (k = s.find(s[j], i)) == j) {
        j++;
      }

      if (j == len) {
        return max(maxlen, j - i);
      }
      maxlen = max(maxlen, j - i);
      i = k + 1;
    }
    return maxlen;
  }
};
