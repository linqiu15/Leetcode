#include <vector>
using namespace std;

class Solution {
public:
  int product_of_array(vector<int> arr) {
    int tmp = 1;
    for (int i = 0; i < int(arr.size()); i++) {
      tmp *= arr[i];
    }
    return tmp;
  }

  int sum_of_array(vector<int> arr) {
    int tmp = 0;
    for (int i = 0; i < int(arr.size()); i++) {
      tmp += arr[i];
    }
    return tmp;
  }
  int subtractProductAndSum(int n) {
    vector<int> arr;
    int digit;
    while (n) {
      digit = n / 10;
      arr.push_back(n - digit * 10);
      n = digit;
    }
    return product_of_array(arr) - sum_of_array(arr);
  }
};
