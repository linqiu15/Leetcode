#include <vector>
using namespace std;

class Solution {
public:
  bool is_even_digit(int n) {
    if (!n)
      return false;
    int i = 0;
    for (; n > 0; i++) {
      n /= 10;
    }
    return i % 2 == 0;
  }
  int findNumbers(vector<int> &nums) {
    int count = 0;
    for (int i = 0; i < int(nums.size()); i++) {
      if (is_even_digit(nums[i]))
        count++;
    }
    return count;
  }
};
