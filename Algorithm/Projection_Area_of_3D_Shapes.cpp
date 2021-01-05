//--------------------Description----------
// On a N * N grid, we place some 1 * 1 * 1 cubes that are axis-aligned with the
// x, y, and z axes.

// Each value v = grid[i][j] represents a tower of v cubes placed on top of grid
// cell (i, j).

// Now we view the projection of these cubes onto the xy, yz, and zx planes.

// A projection is like a shadow, that maps our 3 dimensional figure to a 2
// dimensional plane.

// Here, we are viewing the "shadow" when looking at the cubes from the top, the
// front, and the side.

// Return the total area of all three projections.
//--------------------Results--------------
// Runtime: 16 ms, faster than 86.00% of C++ online submissions for Projection
// Area of 3D Shapes. Memory Usage: 9.8 MB, less than 5.25% of C++ online
// submissions for Projection Area of 3D Shapes.

#include <vector>
using namespace std;
class Solution {
public:
  int projectionArea(vector<vector<int>> &grid) {
    int countarea = 0, top = 0, size = grid.size();
    vector<int> front(size, 0), side(size, 0);

    for (int i = 0; i < size; i++) {
      for (int j = 0; j < size; j++) {
        if (grid[i][j]) {
          top++;

          if (grid[i][j] > front[i]) {
            front[i] = grid[i][j];
          }

          if (grid[i][j] > side[j]) {
            side[j] = grid[i][j];
          }
        }
      }
    }

    // sum up
    for (int i = 0; i < size; i++) {
      countarea += front[i];
    }
    for (int i = 0; i < size; i++) {
      countarea += side[i];
    }
    return countarea + top;
  }
};
