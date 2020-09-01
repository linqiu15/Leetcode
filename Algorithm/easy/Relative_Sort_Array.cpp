//--------------------Description----------
// Given two arrays arr1 and arr2, the elements of arr2 are distinct, and all
// elements in arr2 are also in arr1.

// Sort the elements of arr1 such that the relative ordering of items in arr1
// are the same as in arr2.  Elements that don't appear in arr2 should be placed
// at the end of arr1 in ascending order.
//--------------------Results--------------
// Runtime: 8 ms, faster than 53.89% of C++ online submissions for Relative Sort
// Array. Memory Usage: 7.8 MB, less than 66.70% of C++ online submissions for
// Relative Sort Array.
#include <vector>
using namespace std;

class Solution {
public:
  vector<int> relativeSortArray(vector<int> &arr1, vector<int> &arr2) {

    int i = 0, size1 = arr1.size(), size2 = arr2.size();
    for (int j = 0; j < size2; j++) {
      for (int k = i; k < size1; k++) {
        if (arr1[k] == arr2[j]) {
          int tmp = arr1[k];
          arr1[k] = arr1[i];
          arr1[i] = tmp;
          i++;
        }
      }
    }

    // sorting the rest
    for (int j = i; j < size1; j++) {
      for (int k = j + 1; k < size1; k++) {
        if (arr1[k] < arr1[j]) {
          int tmp = arr1[j];
          arr1[j] = arr1[k];
          arr1[k] = tmp;
        }
      }
    }
    return arr1;
  }
};
