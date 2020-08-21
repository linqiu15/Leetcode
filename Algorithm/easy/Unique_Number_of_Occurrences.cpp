//--------------------Description----------
// Given an array of integers arr, write a function that returns true if and
// only if the number of occurrences of each value in the array is unique.
//--------------------Results--------------
// Runtime: 4 ms, faster than 92.94% of C++ online submissions for Unique Number
// of Occurrences. Memory Usage: 8.3 MB, less than 54.25% of C++ online
// submissions for Unique Number of Occurrences.
#include <set>
#include <unordered_map>
#include <vector>
using namespace std;
class Solution {
public:
  bool uniqueOccurrences(vector<int> &arr) {
    unordered_map<int, int> umap;
    for (int i = 0; i < arr.size(); i++) {
      umap[arr[i]]++;
    }
    set<int> s;
    for (auto it = umap.begin(); it != umap.end(); it++) {
      s.insert(it->second);
    }
    return s.size() == umap.size();
  }
};
