// Runtime: 60 ms, faster than 60.00% of C++ online submissions for Decode XORed
// Array. Memory Usage: 25.3 MB, less than 100.00% of C++ online submissions for
// Decode XORed Array.
#include <vector>
using namespace std;

class Solution {
public:
  vector<int> decode(vector<int> &encoded, int first) {
    int len = encoded.size();
    vector<int> arr(len + 1, 0);
    arr[0] = first;
    for (int i = 1; i <= len; i++) {
      arr[i] = encoded[i - 1] ^ arr[i - 1];
    }
    return arr;
  }
};
