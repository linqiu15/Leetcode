#include <stdlib.h>
#include <vector>
using namespace std;

class Solution {
public:
    //depth first search
    int dfs(int x,int y,vector<vector<int>>& matrix){
        if(matrix[x][y]==0)return 0;
        int row=matrix.size(),col=matrix[0].size();
        //find the maxdep of current point
        int maxdep=abs(x-0)+abs(y-0);
        maxdep=abs(row-1-x)+abs(col-1-y)>maxdep?abs(row-1-x)+abs(col-1-y):maxdep;
        maxdep=abs(x-0)+abs(col-1-y)>maxdep?abs(x-0)+abs(col-1-y):maxdep;
        maxdep=abs(row-1-x)+abs(y-0)>maxdep?abs(row-1-x)+abs(y-0):maxdep;

        for(int d=1;d<maxdep;d++){
                //left-up
                for(int i=0;i<=d;){
                    if(0<=x-i&&0<=y-d+i){
                        if(matrix[x-i][y-d+i]==0){
                            return d;
                        }
                        i++;
                    }else{
                        break;
                    }
                }
                //left-down
                for(int i=0;i<=d;){
                    if(x+i<=row-1&&0<=y-d+i){
                        if(matrix[x+i][y-d+i]==0){
                            return d;
                        }
                        i++;
                    }else{
                        break;
                    }
                }
                //right-up
                for(int i=0;i<d;){
                    if(0<=x-i&&y+d-i<=col-1){
                        if(matrix[x-i][y+d-i]==0){
                            return d;
                        }
                        i++;
                    }else{
                        break;
                    }
                }
                //right-down
                for(int i=0;i<d;){
                    if(x+i<=row-1&&y+d-i<=col-1){
                        if(matrix[x+i][y+d-i]==0){
                            return d;
                        }
                        i++;
                    }else{
                        break;
                    }
                }
        }
        return maxdep;
    }
    
    
    vector<vector<int>> updateMatrix(vector<vector<int>>& matrix) {
        int lrow=matrix.size(),lcolumn=matrix[0].size();
        vector<vector<int>> rvec(lrow,vector<int> (lcolumn,0));
        for(int i=0;i<lrow;i++){
            for(int j=0;j<lcolumn;j++){
                rvec[i][j]=dfs(i,j,matrix);
            }
        }
        return rvec;
    }
};