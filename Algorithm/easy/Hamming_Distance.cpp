//--------------------Description----------
// The Hamming distance between two integers is the number of positions at which
// the corresponding bits are different.
// Given two integers x and y, calculate the Hamming distance.
//--------------------Results--------------
// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Hamming
// Distance. Memory Usage: 6 MB, less than 44.56% of C++ online submissions for
// Hamming Distance.
class Solution {
public:
  int hammingDistance(int x, int y) {
    int count = 0;
    while (x || y) {
      count += (x % 2 != y % 2);
      x /= 2;
      y /= 2;
    }
    return count;
  }
};
