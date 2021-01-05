//--------------------Description----------
// Given the array prices where prices[i] is the price of the ith item in a
// shop. There is a special discount for items in the shop, if you buy the ith
// item, then you will receive a discount equivalent to prices[j] where j is the
// minimum index such that j > i and prices[j] <= prices[i], otherwise, you will
// not receive any discount at all.

// Return an array where the ith element is the final price you will pay for the
// ith item of the shop considering the special discount.
//--------------------Results--------------
// Runtime: 4 ms, faster than 98.73% of C++ online submissions for Final Prices
// With a Special Discount in a Shop. Memory Usage: 10.1 MB, less than 30.59% of
// C++ online submissions for Final Prices With a Special Discount in a Shop.
#include <vector>
using namespace std;

class Solution {
public:
  vector<int> finalPrices(vector<int> &prices) {
    int len = int(prices.size());
    for (int i = 0; i < len; i++) {
      int j = i + 1;
      while (j < len && prices[i] < prices[j]) {
        j++;
      }
      prices[i] -= (j == len) ? 0 : prices[j];
    }
    return prices;
  }
};
