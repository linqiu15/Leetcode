#include <string>
using namespace std;

class Solution {
public:
  int balancedStringSplit(string s) {
    int len = s.size(), maxn = 0, count = 0;
    for (int i = 0; i < len; i++) {
      if (s[i] == 'R') {
        count -= 1;
      } else {
        count += 1;
      }
      if (!count)
        maxn += 1;
    }
    return maxn;
  }
};
