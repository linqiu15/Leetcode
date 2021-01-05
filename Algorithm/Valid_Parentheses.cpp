#include <stack>
#include <string>
using namespace std;
class Solution {
public:
  bool isValid(string s) {

    stack<char> st;
    int len = s.length();

    for (int i = 0; i < len; i++) {
      char tmp = s[i];
      switch (tmp) {
      case '{':
      case '(':
      case '[':
        st.push(tmp);
        break;
      case ']':
        if (st.empty() || st.top() != '[') {
          return false;
        } else {
          st.pop();
        }
        break;
      case ')':
        if (st.empty() || st.top() != '(') {
          return false;
        } else {
          st.pop();
        }
        break;
      case '}':
        if (st.empty() || st.top() != '{') {
          return false;
        } else {
          st.pop();
        }
        break;
      }
    }

    if (st.empty())
      return true;
    else
      return false;
  }
};
