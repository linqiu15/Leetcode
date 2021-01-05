#include <string>
using namespace std;

class Solution {
public:
  int strStr(string haystack, string needle) {
    if (needle.empty())
      return 0;
    int len = haystack.length(), len_sub = needle.length();

    for (int i = 0; i < len - len_sub + 1; ) {
      int j;
      for (j = 0; j < len_sub; j++) {
	if (haystack[i] == needle[j]) {
	  i++;
	} else {
	  i = i - j + 1;
	  break;
	}
      }
      if (j == len_sub)
	return i - j;
    }
    return -1;
  }
};
