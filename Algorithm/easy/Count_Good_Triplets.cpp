#include <stdlib.h>
#include <vector>
using namespace std;
class Solution {
public:
  bool isgood(int x1, int x2, int x3, int a, int b, int c) {
    // x1,x2,x3's index is ordered
    return (abs(x1 - x2) <= a) && (abs(x2 - x3) <= b) && (abs(x1 - x3) <= c);
  }
  int countGoodTriplets(vector<int> &arr, int a, int b, int c) {
    int count = 0;
    for (int i = 0; i < int(arr.size()); i++) {
      for (int j = i + 1; j < int(arr.size()); j++) {
        for (int k = j + 1; k < int(arr.size()); k++) {
          count += int(isgood(arr[i], arr[j], arr[k], a, b, c));
        }
      }
    }
    return count;
  }
};
