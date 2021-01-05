//--------------------Description----------
// Students are asked to stand in non-decreasing order of heights for an annual
// photo.
// Return the minimum number of students that must move in order for all
// students to be standing in non-decreasing order of height.
// Notice that when a group of students is selected they can reorder in any
// possible way between themselves and the non selected students remain on their
// seats.
//--------------------Results--------------
// Runtime: 8 ms, faster than 25.48% of C++ online submissions for Height
// Checker. Memory Usage: 8.3 MB, less than 43.56% of C++ online submissions for
// Height Checker.

#include <vector>
using namespace std;

class Solution {
public:
  int heightChecker(vector<int> &heights) {
    int count = 0;
    vector<int> sorted_heights = heights;
    // Bubble sorting
    for (unsigned i = 0; i < heights.size(); i++) {
      for (unsigned j = i + 1; j < heights.size(); j++) {
        if (sorted_heights[i] > sorted_heights[j]) {
          int tmp = sorted_heights[j];
          sorted_heights[j] = sorted_heights[i];
          sorted_heights[i] = tmp;
        }
      }
    }
    for (unsigned i = 0; i < heights.size(); i++) {
      if (heights[i] != sorted_heights[i])
        count++;
    }
    return count;
  }
};
