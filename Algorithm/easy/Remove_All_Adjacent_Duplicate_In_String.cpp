//--------------------Description----------
// Given a string S of lowercase letters, a duplicate removal consists of
// choosing two adjacent and equal letters, and removing them.

// We repeatedly make duplicate removals on S until we no longer can.

// Return the final string after all such duplicate removals have been made.  It
// is guaranteed the answer is unique.
//--------------------Results--------------
// Runtime: 92 ms, faster than 38.79% of C++ online submissions for Remove All
// Adjacent Duplicates In String. Memory Usage: 10.6 MB, less than 48.25% of C++
// online submissions for Remove All Adjacent Duplicates In String.
#include <stack>
#include <string>

using namespace std;

class Solution {
public:
  string removeDuplicates(string S) {
    // Using stack
    stack<char> s;
    for (int i = int(S.length()) - 1; i >= 0; i--) {
      if (!s.empty() && S[i] == s.top()) {
        s.pop();
      } else {
        s.push(S[i]);
      }
    }
    string rstr;
    while (!s.empty()) {
      rstr.push_back(s.top());
      s.pop();
    }
    return rstr;
  }
};

// point1:for continum circumstance,use stack!
// point2:traversal backwards to avoid inserting instead.
