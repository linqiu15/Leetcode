//--------------------Description----------
// You are given an array of strings words and a string chars.

// A string is good if it can be formed by characters from chars (each character
// can only be used once).

// Return the sum of lengths of all good strings in words.
//--------------------Results--------------
// Runtime: 80 ms, faster than 98.21% of C++ online submissions for Find Words
// That Can Be Formed by Characters. Memory Usage: 15.3 MB, less than 99.03% of
// C++ online submissions for Find Words That Can Be Formed by Characters.
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
  int countCharacters(vector<string> &words, string chars) {
    int char_freq[26] = {0};
    for (int i = 0; i < chars.length(); i++) {
      char_freq[chars[i] - 'a']++;
    }

    int count = 0;
    for (int i = 0; i < words.size(); i++) {
      int tmp_char_freq[26];
      copy(begin(char_freq), end(char_freq), begin(tmp_char_freq));
      int j = 0;
      for (; j < words[i].length(); j++) {
        if (tmp_char_freq[words[i][j] - 'a']) {
          tmp_char_freq[words[i][j] - 'a']--;
        } else {
          break;
        }
      }
      if (j == words[i].length()) {
        count += j;
      }
    }
    return count;
  }
};
