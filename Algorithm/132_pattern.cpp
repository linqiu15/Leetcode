#include <vector>

using namespace std;

class Solution {
public:
  bool find132pattern(vector<int> &nums) {

    // the following solution is for lmn(l<m,n<m),not 132
    // bool flag = true; // whether revert the slope

    // for (int i = 0; i < nums.size() - 1; i++) {
    //   if (flag && nums[i] < nums[i + 1]) {
    //     flag = false;
    //   } else if (!flag && nums[i] > nums[i + 1]) {
    //     return true;
    //   }
    // }
    // return false;

    // // better brute force:work but very slow O(n^2)
    // for (int j = 1; j < nums.size() - 1; j++) {
    //   int numsi = nums[0];
    //   for (int i = 1; i < j; i++) {
    //     if (numsi > nums[i]) {
    //       numsi = nums[i];
    //     }
    //   }

    //   for (int k = j + 1; k < nums.size(); k++) {
    //     if (numsi < nums[j] && nums[j] > nums[k] && numsi < nums[k]) {
    //       return true;
    //     }
    //   }
    // }
    // return false;

    // find the intervals
  }
};
