#include <vector>
using namespace std;

class Solution {
public:
  int maxProduct(vector<int> &nums) {
    // elements are greater than 0&&nums's length are greater than 1
    // find two largest numbers' index
    int max_index = 0, second_index = 1;
    if (nums[0] < nums[1]) {
      max_index = 1;
      second_index = 0;
    }
    for (int i = 2; i < int(nums.size()); i++) {
      if (nums[i] > nums[max_index]) {
        second_index = max_index;
        max_index = i;
      } else if (nums[i] > nums[second_index]) {
        second_index = i;
      }
    }
    return (nums[max_index] - 1) * (nums[second_index] - 1);
  }
};
