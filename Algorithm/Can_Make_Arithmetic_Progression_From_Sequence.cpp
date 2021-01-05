//--------------------Description----------
// Given an array of numbers arr. A sequence of numbers is called an arithmetic
// progression if the difference between any two consecutive elements is the
// same.

// Return true if the array can be rearranged to form an arithmetic progression,
// otherwise, return false.
//--------------------Results--------------
// Runtime: 36 ms, faster than 7.76% of C++ online submissions for Can Make
// Arithmetic Progression From Sequence. Memory Usage: 8.9 MB, less than 45.12%
// of C++ online submissions for Can Make Arithmetic Progression From Sequence.
#include <vector>
using namespace std;

class Solution {
public:
  bool canMakeArithmeticProgression(vector<int> &arr) {
    // Bubble Sorting array
    for (int i = 0; i < arr.size(); i++) {
      for (int j = i + 1; j < arr.size(); j++) {
        if (arr[i] > arr[j]) {
          int tmp = arr[j];
          arr[j] = arr[i];
          arr[i] = tmp;
        }
      }
    }

    // judge
    int i = 1;
    while (i < arr.size() - 1 &&
           (arr[i - 1] - arr[i]) == (arr[i] - arr[i + 1])) {
      i++;
    }
    return i == arr.size() - 1;
  }
};

// point1:no sorting using arithmetic series
