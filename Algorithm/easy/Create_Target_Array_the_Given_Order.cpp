#include <vector>
using namespace std;

class Solution {
public:
  bool vector_insert(vector<int> *vec, int n, int val) {
    int len = int(vec->size());
    if (n < 0 || n > len)
      return false;
    if (n == len) {
      vec->push_back(val);
      return true;
    }
    vec->push_back((*vec)[len - 1]);
    int i = len - 1;
    for (; i > n; i--) {
      (*vec)[i] = (*vec)[i - 1];
    }
    (*vec)[i] = val;
    return true;
  }
  vector<int> createTargetArray(vector<int> &nums, vector<int> &index) {
    vector<int> arr;
    for (int i = 0; i < int(nums.size()); i++) {
      vector_insert(&arr, index[i], nums[i]);
    }
    return arr;
  }
};
