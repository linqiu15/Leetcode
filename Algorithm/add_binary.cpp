#include <string>
using namespace std;

class Solution {
public:
  string addBinary(string a, string b) {
    // //the order of the following is misunderstood
    // string rstr;
    // int lena = a.length(), lenb = b.length(), minlen = min(lena, lenb),
    //     residue = 0, i = 0;
    // for (; i < minlen; i++) {
    //   int sum = (residue + int(a[i] - '0') + int(b[i] - '0')) % 2;
    //   residue = (residue + int(a[i] - '0') + int(b[i] - '0')) / 2;
    //   rstr.push_back('0' + sum);
    // }
    // for (; i < lena; i++) {
    //   int sum = (residue + int(a[i] - '0')) % 2;
    //   residue = (residue + int(a[i] - '0')) / 2;
    //   rstr.push_back('0' + sum);
    // }
    // for (; i < lenb; i++) {
    //   int sum = (residue + int(b[i] - '0')) % 2;
    //   residue = (residue + int(b[i] - '0')) / 2;
    //   rstr.push_back('0' + sum);
    // }

    // if (residue) {
    //   rstr.push_back('0' + residue);
    // }
    // return rstr;

    // Runtime: 0 ms, faster than 100.00% of C++ online submissions for Add
    // Binary.
    // Memory Usage: 6.4 MB, less than 99.77% of C++ online submissions for Add
    // Binary.
    string rstr;
    int i = a.length() - 1, j = b.length() - 1, residue = 0;
    for (; 0 <= i && 0 <= j; i--, j--) {
      int sum = (residue + int(a[i] - '0') + int(b[j] - '0')) % 2;
      residue = (residue + int(a[i] - '0') + int(b[j] - '0')) / 2;
      rstr.insert(rstr.begin(), '0' + sum);
    }
    for (; 0 <= i; i--) {
      int sum = (residue + int(a[i] - '0')) % 2;
      residue = (residue + int(a[i] - '0')) / 2;
      rstr.insert(rstr.begin(), sum + '0');
    }

    for (; 0 <= j; j--) {
      int sum = (residue + int(b[j] - '0')) % 2;
      residue = (residue + int(b[j] - '0')) / 2;
      rstr.insert(rstr.begin(), sum + '0');
    }

    if (residue) {
      rstr.insert(rstr.begin(), '0' + residue);
    }
    return rstr;
  }
};
