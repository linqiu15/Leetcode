#include <vector>
using namespace std;

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
      int len=nums.size(),num=0;
      for(int i=0;i<len;i++){
	for(int j=i+1;j<len;j++){
	  num=(nums[i]==nums[j])?num+1:num;
	}
      }
      return num;
    }
};
