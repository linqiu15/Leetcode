#include <stack>
#include <string>
using namespace std;

class Solution {
public:
  int maxDepth(string s) {
    stack<char> stack;
    int max = 0, count = 0, len = s.length();
    for (int i = 0; i < len; i++) {
      if (s[i] == '(') {
        count++;
        if (count > max) {
          max = count;
        }
      } else if (s[i] == ')') {
        count--;
      }
    }
    return max;
  }
};
