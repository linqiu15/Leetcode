//--------------------Description----------
// Given a string s formed by digits ('0' - '9') and '#' . We want to map s to
// English lowercase characters as follows:

// Characters ('a' to 'i') are represented by ('1' to '9') respectively.
// Characters ('j' to 'z') are represented by ('10#' to '26#') respectively.
// Return the string formed after mapping.

// It's guaranteed that a unique mapping will always exist.

//--------------------Results--------------
// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Decrypt
// String from Alphabet to Integer Mapping. Memory Usage: 6.3 MB, less
// than 64.48% of C++ online submissions for Decrypt String from Alphabet to
// Integer Mapping.

#include <string>
using namespace std;

class Solution {
public:
  int stringtoint(string s) {
    int num = 0;
    for (int i = 0; i < int(s.length()); i++)
      num = num * 10 + s[i] - '1' + 1;
    return num;
  }
  string freqAlphabets(string s) {
    // Scan from right to left
    char alpha_table[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i',
                            'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r',
                            's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    string rstr;
    for (int i = int(s.length()) - 1; i >= 0;) {
      if ('1' <= s[i] && s[i] <= '9') {
        rstr.insert(rstr.begin(), alpha_table[s[i] - '1']);
        i--;
      } else {
        rstr.insert(rstr.begin(),
                    alpha_table[stringtoint(s.substr(i - 2, 2)) - 1]);
        i = i - 3;
      }
    }
    return rstr;
  }
};
