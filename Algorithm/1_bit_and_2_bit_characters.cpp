#include <vector>
using namespace std;

class Solution {
public:
  bool isOneBitCharacter(vector<int> &bits) {
    int i = 0, len = bits.size();
    while (i < len) {
      // the only possible to return false
      if (i == len - 2 && bits[i] == 1) {
        return false;
      }
      if (bits[i] == 1) {
        i += 2;
      } else {
        i++;
      }
    }
    return true;
  }
};
