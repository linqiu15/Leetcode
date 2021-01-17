#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
  string longestPalindrome(string s) {
    int len = s.length();
    string rstr = "";

    // brute-force searching
    for (int i = 0; i < len; i++) {
      for (int j = len - 1; j >= i && s[i] == s[j]; j--) {
        // if (s[i] == s[j]) {

        //   int k = 1;
        //   while (k < (j - i + 1) / 2 && s[i + k] == s[j - k]) {
        //     k++;
        //   }

        //   if (k >= (j - i + 1) / 2 && rstr.length() <= (j - i + 1)) {
        //     rstr = s.substr(i, j - i + 1);
        //     break;
        //   }
        // }
        int k = 1;

        while (k < (j - i + 1) / 2 && s[i + k] == s[j - k]) {
          k++;
        }

        if (k >= (j - i + 1) / 2 && rstr.length() <= (j - i + 1)) {
          rstr = s.substr(i, j - i + 1);
          break;
        }
      }
    }

    return rstr;
  }
};
