//--------------------Description----------
// Given the array nums, obtain a subsequence of the array whose sum of elements
// is strictly greater than the sum of the non included elements in such
// subsequence.
// If there are multiple solutions, return the subsequence with minimum size and
// if there still exist multiple solutions, return the subsequence with the
// maximum total sum of all its elements. A subsequence of an array can be
// obtained by erasing some (possibly zero) elements from the array.
// Note that the solution with the given constraints is guaranteed to be unique.
// Also return the answer sorted in non-increasing order.
//--------------------Results--------------
// Runtime: 16 ms, faster than 83.21% of C++ online submissions for Minimum
// Subsequence in Non-Increasing Order. Memory Usage: 10.8 MB, less than 26.09%
// of C++ online submissions for Minimum Subsequence in Non-Increasing Order.
#include <algorithm>
#include <vector>
using namespace std;
class Solution {
public:
  int sumofarray(vector<int> &nums) {
    // sum an array from both ends
    int i = 0, j = nums.size() - 1, count = 0;
    while (i < j) {
      count += nums[i];
      count += nums[j];
      i++;
      j--;
    }
    if (i == j)
      count += nums[i];
    return count;
  }
  vector<int> minSubsequence(vector<int> &nums) {
    vector<int> rarray;
    int sum = sumofarray(nums), subsum = 0;
    sort(nums.begin(), nums.end());
    for (unsigned i = nums.size() - 1; i >= 0; i--) {
      rarray.push_back(nums[i]);
      subsum += nums[i];
      if (subsum > sum / 2)
        break;
    }
    return rarray;
  }
};
