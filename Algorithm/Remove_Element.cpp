#include <vector>
using namespace std;


class Solution {
public:
  int removeElement(vector<int> &nums, int val) {
    int len = nums.size();
    if (len == 1)
      // good technique
      return int(nums[0] != val);
    int res = 0;
    for (; res < len; res++) {
      if (nums[res] == val) {
        int j = len - 1;
        while (nums[j] == val && j > res) {
          j--;
        }
        if (j > res) {
          nums[res] = nums[j];
          nums[j] = val;
        } else {
          break;
        }
      }
    }
    return res;
  }
};
