class Solution {
public:
  int addDigits(int num) {
    // // recursive way(trival)
    // if (0 <= num && num <= 9)
    //   return num;
    // int sum = 0;
    // while (num) {
    //   sum += num % 10;
    //   num /= 10;
    // }
    // return addDigits(sum);

    // https://en.wikipedia.org/wiki/Digital_root
    return num == 0 ? 0 : 1 + (num - 1) % 9;
  }
};
