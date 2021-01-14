#include <string>
#include <vector>
using namespace std;

class Solution {
public:
  int isallowed(vector<int> &allarr, vector<int> &arr) {
    for (int i = 0; i < arr.size(); i++) {
      if (arr[i] && !allarr[i])
        return 0;
    }
    return 1;
  }

  int countConsistentStrings(string allowed, vector<string> &words) {
    // int count = 0;
    // vector<int> allarr(26, 0);
    // for (int i = 0; i < allowed.length(); i++) {
    //   allarr[int(allowed[i] - 'a')]++;
    // }
    // for (int i = 0; i < words.size(); i++) {
    //   vector<int> arr(26, 0);
    //   for (int j = 0; j < words[i].length(); j++) {
    //     arr[int(words[i][j] - 'a')]++;
    //   }
    //   count += isallowed(allarr, arr);
    // }

    // return count;

    // using <stirng>
    int count = 0;
    for (int i = 0; i < words.size(); i++) {
      bool tmp = true;
      for (int j = 0; j < words[i].length(); j++) {
        if (allowed.find(words[i][j]) == string::npos) {
          tmp = false;
          break;
        }
      }
      count += int(tmp);
    }
    return count;
  }
};
