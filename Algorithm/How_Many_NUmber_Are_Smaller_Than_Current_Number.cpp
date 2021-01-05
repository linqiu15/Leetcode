#include <vector>
using namespace std;

class Solution {
public:
  vector<int> bubble_sort(vector<int>& nums){
    vector<int> rnums(nums);
    int len=nums.size(),tmp;
    for(int i=0;i<len;i++){
      for(int j=i+1;j<len;j++){
	if(rnums[i]>rnums[j]){
	  tmp=rnums[i];
	  rnums[i]=rnums[j];
	  rnums[j]=tmp;
	}
      }
    }
    return rnums;
  }

  vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
    vector<int> sorted_nums=bubble_sort(nums);
    vector<int> rnums(nums);
    for(int i=0;i<int(nums.size());i++){
      int j=0;
      for(;sorted_nums[j]<nums[i];j++){}
      rnums[i]=j;
    }
    return rnums;
  }
};
