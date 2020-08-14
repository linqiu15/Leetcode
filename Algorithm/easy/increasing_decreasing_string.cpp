//--------------------Description----------
// Given a string s. You should re-order the string using the following
// algorithm:

// Pick the smallest character from s and append it to the result.
// Pick the smallest character from s which is greater than the last appended
// character to the result and append it. Repeat step 2 until you cannot pick
// more characters. Pick the largest character from s and append it to the
// result. Pick the largest character from s which is smaller than the last
// appended character to the result and append it. Repeat step 5 until you
// cannot pick more characters. Repeat the steps from 1 to 6 until you pick all
// characters from s. In each step, If the smallest or the largest character
// appears more than once you can choose any occurrence and append it to the
// result.

// Return the result string after sorting s with this algorithm.
//--------------------Results--------------
// Runtime: 20 ms, faster than 64.48% of C++ online submissions for Increasing
// Decreasing String. Memory Usage: 8.8 MB, less than 8.96% of C++ online
// submissions for Increasing Decreasing String.
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
  // check if frequence array means string empty
  bool isempty(vector<int> freq) {
    int i = 0, len = int(freq.size());
    while (i < len && freq[i] == 0) {
      i++;
    }
    return i == len;
  }

  string sortString(string s) {
    string rstr;
    int alphabet_size = 26;
    vector<int> freq(alphabet_size, 0);
    for (int i = 0; i < int(s.length()); i++) {
      freq[s[i] - 'a']++;
    }
    bool isincreas = true;
    while (!isempty(freq)) {
      if (isincreas) {
        for (int i = 0; i < alphabet_size; i++) {
          if (freq[i]) {
            rstr.push_back('a' + i);
            freq[i]--;
          }
        }
      } else {
        for (int i = alphabet_size - 1; i >= 0; i--) {
          if (freq[i]) {
            rstr.push_back('a' + i);
            freq[i]--;
          }
        }
      }
      isincreas = !isincreas;
    }
    return rstr;
  }
};
