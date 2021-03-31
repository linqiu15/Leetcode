#include <string>
using namespace std;

class Solution {
	public:
		int lengthOfLastWord(string s) {
			int k;	
			for(k=s.length()-1;s[k]!=' ';k--){}
			return s.length()-k-1;
		}
};
