class Solution {
public:
  int xorOperation(int n, int start) {
    int a = start, b = start + 2;
    for (int i = 1; i < n; i++) {
      a = a ^ b;
      b = b + 2;
    }
    return a;
  }
};
