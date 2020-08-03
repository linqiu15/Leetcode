class Solution {
public:
  int reduce(int n){
    return (n%2==1)?n-1:n/2;
  }
  
  int numberOfSteps (int num) {
    int rnum=0;
    while(num){
      num=reduce(num);
      rnum++;
    }
    return rnum;
  }
};
