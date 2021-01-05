#include <vector>
using namespace std;

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int num=candies.size(),maxcandy=0;
        for(int i=0;i<num;i++){
            maxcandy=candies[i]>maxcandy?candies[i]:maxcandy;
        }

        vector<bool> res(num,false);
        for(int i=0;i<num;i++){
            res[i]=(candies[i]+extraCandies>=maxcandy)?true:false;
        }
        return res;
    }
};