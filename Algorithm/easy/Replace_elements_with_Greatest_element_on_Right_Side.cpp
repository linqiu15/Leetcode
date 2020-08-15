//--------------------Description----------
// Given an array arr, replace every element in that array with the greatest
// element among the elements to its right, and replace the last element with
// -1. After doing so, return the array.
//--------------------Results--------------
// Runtime: 20 ms, faster than 99.46% of C++ online submissions for Replace
// Elements with Greatest Element on Right Side. Memory Usage: 14.9 MB, less
// than 19.10% of C++ online submissions for Replace Elements with Greatest
// Element on Right Side.
#include <vector>
using namespace std;

class Solution {
public:
  vector<int> replaceElements(vector<int> &arr) {
    int end = int(arr.size()) - 1, current_max = arr[end], pos = end - 1;
    while (pos >= 0) {
      if (arr[pos] > current_max) {
        int tmp = arr[pos];
        arr[pos] = current_max;
        current_max = tmp;
      } else {
        arr[pos] = current_max;
      }
      pos--;
    }
    arr[end] = -1;
    return arr;
  }
};

// point1:Loop through the array starting from the end,Keep the maximum value
// seen so far. point2:no more need for dicussion between end>0 or end=0
