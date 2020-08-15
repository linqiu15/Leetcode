//--------------------Description----------
// A self-dividing number is a number that is divisible by every digit it
// contains. For example, 128 is a self-dividing number because 128 % 1 == 0,
// 128 % 2 == 0, and 128 % 8 == 0. Also, a self-dividing number is not allowed
// to contain the digit zero. Given a lower and upper number bound, output a
// list of every possible self dividing number, including the bounds if
// possible.
//--------------------Results--------------
// Runtime: 52 ms, faster than 5.12% of C++ online submissions for Self Dividing
// Numbers. Memory Usage: 11.6 MB, less than 5.05% of C++ online submissions for
// Self Dividing Numbers.
#include <vector>
using namespace std;

class Solution {
public:
  bool isselfdevisible(int num) {
    vector<int> array;
    int tmp = num;
    while (tmp) {
      array.push_back(tmp % 10);
      tmp /= 10;
    }
    int i = 0;
    for (; i < int(array.size()) && array[i] != 0 && num % array[i] == 0; i++) {
    }
    return i == int(array.size());
  }
  vector<int> selfDividingNumbers(int left, int right) {
    vector<int> rarray;
    while (left <= right) {
      if (isselfdevisible(left)) {
        rarray.push_back(left);
      }
      left++;
    }
    return rarray;
  }
};

// point:题目提示中给了“将位数转化为array”，但不要真的就转化为array,而是把这个过程用循环模拟，发生error用break等跳出即可。
