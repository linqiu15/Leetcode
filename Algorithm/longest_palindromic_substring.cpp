#include <iostream>
#include <string>
using namespace std;

// Time limit exceeded
// class Solution {
// public:
//   string longestPalindrome(string s) {
//     int len = s.length();
//     string rstr = "";

//     // brute-force searching
//     for (int i = 0; i < len; i++) {
//       int j = len - 1;
//       while (j >= i) {
//         for (; j >= i && s[i] != s[j]; j--) {
//         }
//         // if there is no element similar to s[i]
//         if (i == j) {
//           rstr = rstr.length()<=1?s.substr(i,1):rstr;
//           break;
//         }
//         int k = 1;
//         for (; k < (j - i + 1) / 2 && s[i + k] == s[j - k]; k++) {
//         }
//         if (k >= (j - i + 1) / 2 && rstr.length() <= (j - i + 1)) {
//           rstr = s.substr(i, j - i + 1);
//           break;
//         }
//         j--;
//       }
//     }

//     return rstr;
//   }
// };

class Solution {
public:
    string longestPalindrome(string s) {
      
    }
};

int main(void){
  Solution *sol=new Solution();
  cout<<sol->longestPalindrome("babad")<<endl;
  return 0;
}
