//--------------------Description----------
// You are given the array paths, where paths[i] = [cityAi, cityBi] means there
// exists a direct path going from cityAi to cityBi. Return the destination
// city, that is, the city without any path outgoing to another city.

// It is guaranteed that the graph of paths forms a line without any loop,
// therefore, there will be exactly one destination city.
//--------------------Results--------------
// Runtime: 24 ms, faster than 85.05% of C++ online submissions for Destination
// City. Memory Usage: 10 MB, less than 98.60% of C++ online submissions for
// Destination City.
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
  string outer_city(vector<vector<string>> &paths, string city) {
    int i = 0;
    for (; i < int(paths.size()) && city != paths[i][0]; i++) {
    }
    return i == int(paths.size()) ? city : paths[i][1];
  }
  string destCity(vector<vector<string>> &paths) {
    string current_city = paths[0][0], tmp;
    while ((tmp = outer_city(paths, current_city)) != current_city) {
      current_city = tmp;
    }
    return current_city;
  }
};
