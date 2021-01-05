#include <algorithm>
#include <vector>
using namespace std;
class Solution {
public:
  int arrayPairSum(vector<int> &nums) {

    // Mathod1(Double pointer):Time limit exceeded
    // int len = nums.size(), count = 0;
    // // sorting the first half of nums
    // for (int i = 0; i < len / 2; i++) {
    //   for (int j = i + 1; j < len / 2; j++) {
    //     if (nums[i] > nums[j]) {
    //       int tmp = nums[j];
    //       nums[j] = nums[i];
    //       nums[i] = tmp;
    //     }
    //   }
    // }
    // // sorting the last half
    // for (int i = len / 2; i < len; i++) {
    //   for (int j = i + 1; j < len; j++) {
    //     if (nums[i] > nums[j]) {
    //       int tmp = nums[j];
    //       nums[j] = nums[i];
    //       nums[i] = tmp;
    //     }
    //   }
    // }
    // int left = 0, right = len / 2;
    // while (left < len / 2 && right < len) {
    //   if (nums[left] <= nums[right]) {
    //     count += nums[left];
    //     if (left + 1 < len / 2 && nums[left + 1] < nums[right]) {
    //       left += 2;
    //     } else {
    //       left++;
    //       right++;
    //     }
    //   } else {
    //     count += nums[right];
    //     if (right + 1 < len && nums[right + 1] < nums[left]) {
    //       right += 2;
    //     } else {
    //       left++;
    //       right++;
    //     }
    //   }
    // }
    // while (left < len / 2) {
    //   count += nums[left];
    //   left += 2;
    // }
    // while (right < len) {
    //   count += nums[right];
    //   right += 2;
    // }

    // Method2:algorithm library
    int len = nums.size();
    sort(nums.begin(), nums.end());
    int count = 0;
    for (int i = 0; i < len / 2; i++) {
      count += nums[i * 2];
    }
    return count;
  }
};
