#include <string>
using namespace std;

class Solution {
public:
    string defangIPaddr(string address) {
      string rstr;
      for(int i=0;i<address.size();i++){
	if('0'<=address[i]&&address[i]<='9'){
	  rstr.push_back(address[i]);
	}else{
	  rstr.append("[.]");
	}
      }
      return rstr;
    }
};
