class Solution {
public:
  bool isPalindrome(int x) {
    if(x<0)return false;
    else if(x==0)return true;
    else{
      int l=x%10;
      if(l==0)return false;
      else{
        int x1=x/10;
        int tmp=0;
        while(x1){
          tmp=tmp*10+l;
          l=x1%10;
          x1/=10;
        }
        tmp=tmp*10+l;
        return (tmp==x);
      }
    }
  }
};
