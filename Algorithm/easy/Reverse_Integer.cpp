#include <math.h>
class Solution{
public:
  int reverse(int x){
    if(x==0|x==-2147483648)return 0;
    if(x>0){
      int rnum=0,l=0;
      l=x%10;
      x/=10;
      while(l==0){
	l=x%10;
	x/=10;
      }
      while(x){
	rnum=rnum*10+l;
	l=x%10;
	x/=10;
      }
      if(rnum>214748364|(rnum==214748364&l>7)){
	return 0;
      }else{
	return rnum*10+l;
      }
    }
    else{
      x=-x;
      int rnum=0,l=0;
      l=x%10;
      x/=10;
      while(l==0){
	l=x%10;
	x/=10;
      }
      while(x){
	rnum=rnum*10+l;
	l=x%10;
	x/=10;
      }
      if(rnum>214748364|(rnum==214748364&l>8)){
	return 0;
      } else{
	return -(rnum*10+l);
      }
    }
  }
};
