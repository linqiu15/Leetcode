#include <string>
using namespace std;

class Solution {
public:
  string toLowerCase(string str) {
    for (int i = 0; i < int(str.length()); i++) {
      if ('A' <= str[i] && str[i] <= 'Z')
        str[i] += 32;
    }
    return str;
  }
};
