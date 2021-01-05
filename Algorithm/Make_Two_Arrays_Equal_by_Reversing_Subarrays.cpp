//--------------------Description----------
// Given two integer arrays of equal length target and arr.

// In one step, you can select any non-empty sub-array of arr and reverse it.
// You are allowed to make any number of steps.

// Return True if you can make arr equal to target, or False otherwise.
//--------------------Results--------------
// Runtime: 216 ms, faster than 5.61% of C++ online submissions for Make Two
// Arrays Equal by Reversing Sub-arrays. Memory Usage: 14.1 MB, less than 68.81%
// of C++ online submissions for Make Two Arrays Equal by Reversing Sub-arrays.
#include <vector>
using namespace std;

class Solution {
public:
  bool canBeEqual(vector<int> &target, vector<int> &arr) {
    // The Necessary and sufficient condition for two arrays to be the same
    // after reverses is that the two arrays have the same components(according
    // to the group theory,对换)
    int size1 = target.size(), size2 = arr.size();
    if (size1 != size2)
      return false;

    // Sort by bubble
    for (int i = 0; i < size1; i++) {
      for (int j = i + 1; j < size1; j++) {
        if (target[i] > target[j]) {
          int tmp = target[j];
          target[j] = target[i];
          target[i] = tmp;
        }
      }
    }

    for (int i = 0; i < size2; i++) {
      for (int j = i + 1; j < size2; j++) {
        if (arr[i] > arr[j]) {
          int tmp = arr[j];
          arr[j] = arr[i];
          arr[i] = tmp;
        }
      }
    }

    // test if the two sorted arrays are the same
    int i = 0;
    while (i < size1 && target[i] == arr[i]) {
      i++;
    }
    return i == size1;
  }
};
