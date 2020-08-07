#include <vector>
using namespace std;

class Solution {
public:
  int oddCells(int n, int m, vector<vector<int>> &indices) {
    // false:even
    vector<vector<bool>> arr(n, vector<bool>(m, false));
    for (int i = 0; i < int(indices.size()); i++) {
      for (int j = 0; j < m; j++)
        arr[indices[i][0]][j] = !arr[indices[i][0]][j];
      for (int k = 0; k < n; k++)
        arr[k][indices[i][1]] = !arr[k][indices[i][1]];
    }
    int count = 0;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++)
        count += (arr[i][j] == true);
    }
    return count;
  }
};
