//--------------------Description----------
// Given an array A of strings made only from lowercase letters, return a list
// of all characters that show up in all strings within the list (including
// duplicates).  For example, if a character occurs 3 times in all strings but
// not 4 times, you need to include that character three times in the final
// answer.

// You may return the answer in any order.
//--------------------Results--------------
// Runtime: 72 ms, faster than 11.19% of C++ online submissions for Find Common
// Characters. Memory Usage: 12.6 MB, less than 10.45% of C++ online submissions
// for Find Common Characters.
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
  vector<string> commonChars(vector<string> &A) {
    int size = A.size();
    vector<unordered_map<char, int>> map_vec(size);
    unordered_map<char, int> common_vec;

    // statistics
    for (int i = 0; i < size; i++) {
      for (unsigned j = 0; j < A[i].length(); j++) {
        map_vec[i][A[i][j]] += 1;
      }
    }

    for (auto key : map_vec[0]) {
      char tmpchar = key.first;
      int tmpnum = key.second;
      for (int j = 1; j < size; j++) {
        tmpnum = (map_vec[j][tmpchar] < tmpnum) ? map_vec[j][tmpchar] : tmpnum;
      }
      common_vec[tmpchar] = tmpnum;
    }

    vector<string> rvec;
    for (auto key : common_vec) {
      for (int i = 0; i < key.second; i++) {
        rvec.push_back(string(1, key.first));
      }
    }
    return rvec;
  }
};
