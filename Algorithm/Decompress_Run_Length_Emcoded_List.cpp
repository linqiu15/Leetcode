#include <vector>
using namespace std;

class Solution {
public:
  vector<int> decompressRLElist(vector<int> &nums) {
    vector<int> rlist;
    for (int i = 0; i < int(nums.size()) / 2; i++) {
      for (int j = 0; j < nums[i * 2]; j++) {
        rlist.push_back(nums[i * 2 + 1]);
      }
    }
    return rlist;
  }
};
