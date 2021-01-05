#include <vector>
using namespace std;

class Solution {
public:
  vector<int> runningSum(vector<int>& nums) {
    int len=nums.size(),tmp=0;
    vector<int> rnum(len);
    for(int i=0;i<len;i++){
      rnum[i]=tmp+nums[i];
      tmp=rnum[i];
    }
    return rnum;
  }
};
