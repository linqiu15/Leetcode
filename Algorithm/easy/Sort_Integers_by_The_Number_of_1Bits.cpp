//--------------------Description----------
// Given an integer array arr. You have to sort the integers in the array in
// ascending order by the number of 1's in their binary representation and in
// case of two or more integers have the same number of 1's you have to sort
// them in ascending order.

// Return the sorted array.
//--------------------Results--------------
// Runtime: 80 ms, faster than 5.06% of C++ online submissions for Sort Integers
// by The Number of 1 Bits. Memory Usage: 10.4 MB, less than 47.33% of C++
// online submissions for Sort Integers by The Number of 1 Bits.
#include <vector>
using namespace std;

class Solution {
public:
  int countbit(int num) {
    int count = 0;
    while (num) {
      if (num % 2 == 1)
        count++;
      num /= 2;
    }
    return count;
  }
  vector<int> sortByBits(vector<int> &arr) {
    int len = arr.size();
    vector<int> bits(len, 0);
    for (int i = 0; i < len; i++) {
      bits[i] = countbit(arr[i]);
    }

    // Bubble-Sorting
    for (int i = 0; i < len; i++) {
      for (int j = i + 1; j < len; j++) {
        if (bits[j] < bits[i] || (bits[i] == bits[j] && arr[j] < arr[i])) {
          int tmpnum = arr[j], tmpbitnum = bits[j];
          arr[j] = arr[i];
          bits[j] = bits[i]; // swap both num and bit number.
          arr[i] = tmpnum;
          bits[i] = tmpbitnum;
        }
      }
    }
    return arr;
  }
};

// point1:if a number's priority is  represented by a function of it,sort the
// number along with its representation.
