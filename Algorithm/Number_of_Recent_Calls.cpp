//--------------------Description----------
// Write a class RecentCounter to count recent requests.
// It has only one method: ping(int t), where t represents some time in
// milliseconds.
// Return the number of pings that have been made from 3000 milliseconds ago
// until now.
// Any ping with time in [t - 3000, t] will count, including the current ping.
// It is guaranteed that every call to ping uses a strictly larger value of t
// than before.
//--------------------Results--------------
// Runtime: 1952 ms, faster than 5.03% of C++ online submissions for Number of
// Recent Calls. Memory Usage: 58.1 MB, less than 16.06% of C++ online
// submissions for Number of Recent Calls.

// my solution
// #include <vector>
// using namespace std;

// class RecentCounter {
// public:
//   vector<int> record;
//   RecentCounter() {}

//   int ping(int t) {
//     record.push_back(t);
//     int count = 0;
//     vector<int>::reverse_iterator rit = record.rbegin();
//     while (rit != record.rend() && *rit >= t - 3000) {
//       count++;
//       rit++;
//     }
//     return count;
//   }
// };

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */

// try official
//--------------------Results--------------
// Runtime: 300 ms, faster than 62.42% of C++ online submissions for Number of
// Recent Calls. Memory Usage: 57.4 MB, less than 77.84% of C++ online
// submissions for Number of Recent Calls.
#include <queue>
using namespace std;

class RecentCounter {
public:
  queue<int> q;
  RecentCounter() {}

  int ping(int t) {
    q.push(t);
    while (q.front() + 3000 < t) {
      q.pop();
    }
    return q.size();
  }
};
