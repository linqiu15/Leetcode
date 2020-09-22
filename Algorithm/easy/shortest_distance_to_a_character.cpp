//--------------------Description----------
// Given a string S and a character C, return an array of integers representing
// the shortest distance from the character C in the string.
//--------------------Results--------------
// Runtime: 8 ms, faster than 26.15% of C++ online submissions for Shortest
// Distance to a Character. Memory Usage: 9.3 MB, less than 5.08% of C++ online
// submissions for Shortest Distance to a Character.
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
  int getdistance(vector<int> arr, int n) {
    // arr is ascending
    if (n <= arr[0]) {
      return arr[0] - n;
    } else if (n >= arr.back()) {
      return n - arr.back();
    }
    int i = 0;
    while (arr[i] < n) {
      i++;
    }
    return min(n - arr[i - 1], arr[i] - n);
  }
  vector<int> shortestToChar(string S, char C) {
    vector<int> index, v(S.length());
    for (int i = 0; i < S.length(); i++) {
      if (C == S[i])
        index.push_back(i);
    }
    for (int i = 0; i < S.length(); i++) {
      if (C == S[i]) {
        v[i] = 0;
      } else {
        v[i] = getdistance(index, i);
      }
    }
    return v;
  }
};

// sol1: using "INT_MAX"
// class Solution {
// public:
//     vector<int> shortestToChar(string S, char C) {
//         vector<int> a(S.length(), INT_MAX);
//         int pos, flag = 0;

//         for(int i =0; i< S.length(); ++i)
//         {
//             if(S[i] == C)
//              pos = 0;
//             a[i] = pos;
//             pos++;

//         }
//          for(int i =S.length() - 1; i>= 0; --i)
//         {
//             if(S[i] == C)
//             {
//              pos = 0;
//             }
//             a[i] = min(a[i], pos);
//              pos++;
//         }
//         return a;
//     }
// };
