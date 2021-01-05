//--------------------Description----------
// Given a string S that only contains "I" (increase) or "D" (decrease), let N =
// S.length.
// Return any permutation A of [0, 1, ..., N] such that for all i = 0, ..., N-1:
// If S[i] == "I", then A[i] < A[i+1]
// If S[i] == "D", then A[i] > A[i+1]
//--------------------Results--------------
// Runtime: 12 ms, faster than 55.53% of C++ online submissions for DI String
// Match. Memory Usage: 9.2 MB, less than 16.12% of C++ online submissions for
// DI String Match.
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
  vector<int> diStringMatch(string S) {
    int num = S.length();
    vector<int> array;
    int i = 0, j = num;
    for (int k = 0; k < num; k++) {
      array.push_back(S[k] == 'I' ? i++ : j--);
    }
    array.push_back(i);
    return array;
  }
};
