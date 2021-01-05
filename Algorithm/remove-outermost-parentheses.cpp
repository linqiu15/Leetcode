// ------------------Desription-------------
// A valid parentheses string is either empty (""), "(" + A + ")", or A + B,
// where A and B are valid parentheses strings, and + represents string
// concatenation.  For example, "", "()", "(())()", and "(()(()))" are all valid
// parentheses strings.

// A valid parentheses string S is primitive if it is nonempty, and there does
// not exist a way to split it into S = A+B, with A and B nonempty valid
// parentheses strings.

// Given a valid parentheses string S, consider its primitive decomposition: S =
// P_1 + P_2 + ... + P_k, where P_i are primitive valid parentheses strings.

// Return S after removing the outermost parentheses of every primitive string
// in the primitive decomposition of S.

// ------------------Results-------------------
// Runtime: 8 ms, faster than 83.09% of C++ online submissions for Remove
// Outermost Parentheses. Memory Usage: 6.7 MB, less than 68.70% of C++ online
// submissions for Remove Outermost Parentheses.

#include <string>
using namespace std;

class Solution {
public:
  string removeOuterParentheses(string S) {
    string rstr = "";
    int count = 0, start = 0, end = 0;
    while (end < int(S.length())) {
      if (S[end] == '(') {
        count++;
      } else if (S[end] == ')') {
        count--;
      }
      if (!count) {
        rstr.append(S.substr(start + 1, end - start - 1));
        start = end + 1;
      }
      end++;
    }
    return rstr;
  }
};
