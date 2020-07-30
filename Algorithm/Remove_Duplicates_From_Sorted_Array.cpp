#include <vector>
using namespace std;

class Solution {
public:
  // failed to use erase
  int removeDuplicates(vector<int> &nums) {

    if (nums.size() <= 1)
      return nums.size();

    int start = 0, end = 1;
    int len = nums.size();

    while (end < len) {
      if (nums[end] == nums[start]) {
        end += 1;
        continue;
      }
      // nums[++start] = nums[end++];
      start += 1;
      nums[start] = nums[end];
      end += 1;
    }
    return start + 1;
  }
};
