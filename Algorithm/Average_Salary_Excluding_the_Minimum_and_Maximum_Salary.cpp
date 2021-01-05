//--------------------Description----------
// Given an array of unique integers salary where salary[i] is the salary of the
// employee i.

// Return the average salary of employees excluding the minimum and maximum
// salary.
//--------------------Results--------------
// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Average
// Salary Excluding the Minimum and Maximum Salary. Memory Usage: 7.3 MB, less
// than 43.03% of C++ online submissions for Average Salary Excluding the
// Minimum and Maximum Salary.
#include <algorithm>
#include <vector>
using namespace std;
class Solution {
public:
  double average(vector<int> &salary) {
    sort(salary.begin(), salary.end());
    int i = 1, j = salary.size() - 2;
    double count = 0;
    while (i < j) {
      count += salary[i++] + salary[j--];
    }
    count += (i == j) ? salary[i] : 0;
    return count / (salary.size() - 2);
  }
};

// point1:注意count应该用double
