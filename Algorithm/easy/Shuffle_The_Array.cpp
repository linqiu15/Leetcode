#include <vector>
using namespace std;

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
      vector<int> rnums(2*n);
      int j=0;
      for(int i=0;i<n;i++){
	rnums[j]=nums[i];
	rnums[j+1]=nums[i+n];
	j+=2;
      }
      return rnums;
    }
};
