//----------------Description----------------
// Given a positive integer num consisting only of digits 6 and 9.
// Return the maximum number you can get by changing at most one digit (6
// becomes 9, and 9 becomes 6).
//----------------Results--------------------
// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Maximum 69
// Number. Memory Usage: 6 MB, less than 54.73% of C++ online submissions for
// Maximum 69 Number.

#include <vector>
using namespace std;

class Solution {
public:
  int maximum69Number(int num) {
    vector<int> array;
    while (num) {
      array.insert(array.begin(), num % 10);
      num /= 10;
    }
    bool flag = true;
    int maxnum = 0;
    for (int i = 0; i < int(array.size()); i++) {
      if (array[i] == 9) {
        maxnum = maxnum * 10 + array[i];
      } else if ((array[i] == 6) && flag) {
        maxnum = maxnum * 10 + 9;
        flag = false;
      } else {
        maxnum = maxnum * 10 + array[i];
      }
    }
    return maxnum;
  }
};
