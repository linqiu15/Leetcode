#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
      string rstr(s);
      for(int i=0;i<int(s.size());i++){
	rstr[indices[i]]=s[i];
      }
      return rstr;
    }
};
