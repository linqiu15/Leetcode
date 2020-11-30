#include <vector>
using namespace std;
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
       int row=accounts.size(),col=accounts[0].size();
       vector<int> wealth(row,0);
       for(int i=0;i<row;i++){
           for(int j=0;j<col;j++){
               wealth[i]+=accounts[i][j];
           }
       } 
       int res=0;
       for(int i=0;i<row;i++){
           res=wealth[i]>res?wealth[i]:res;
       }
       return res;
    }
};