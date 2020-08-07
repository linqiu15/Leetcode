#include <stdlib.h>
#include <vector>
using namespace std;

class Solution {
public:
  int minTimeToVisitAllPoints(vector<vector<int>> &points) {
    int time = 0;
    for (int i = 0; i < int(points.size()) - 1; i++) {
      time += max(abs(points[i][0] - points[i + 1][0]),
                  abs(points[i][1] - points[i + 1][1]));
    }
    return time;
  }
};
