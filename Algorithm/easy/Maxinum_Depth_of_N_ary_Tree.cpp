//--------------------Description----------
// Given a n-ary tree, find its maximum depth.

// The maximum depth is the number of nodes along the longest path from the root
// node down to the farthest leaf node.

// Nary-Tree input serialization is represented in their level order traversal,
// each group of children is separated by the null value (See examples).
//--------------------Results--------------
// Mathod1
// Runtime: 36 ms, faster than 70.30% of C++ online submissions for Maximum
// Depth of N-ary Tree. Memory Usage: 11.4 MB, less than 5.05% of C++ online
// submissions for Maximum Depth of N-ary Tree.
// Method2
// Runtime: 36 ms, faster than 69.76% of C++ online submissions for Maximum
// Depth of N-ary Tree. Memory Usage: 10.7 MB, less than 72.31% of C++ online
// submissions for Maximum Depth of N-ary Tree.

#include <algorithm>
#include <queue>
#include <vector>
using namespace std;

// Definition for a Node.
class Node {
public:
  int val;
  vector<Node *> children;

  Node() {}

  Node(int _val) { val = _val; }

  Node(int _val, vector<Node *> _children) {
    val = _val;
    children = _children;
  }
};

class Solution {
public:
  int maxDepth(Node *root) {
    // // mathod1:recursive
    // if (!root)
    //   return 0;
    // if (root->children.size() == 0)
    //   return 1;
    // vector<int> subdep;
    // for (unsigned i = 0; i < root->children.size(); i++) {
    //   subdep.push_back(maxDepth(root->children[i]));
    // }
    // return 1 + *max_element(subdep.begin(), subdep.end());

    // method2:BFS
    if (!root)
      return 0;
    queue<Node *> q;
    q.push(root);
    int count = 0;
    while (!q.empty()) {
      int num = q.size();
      for (int i = 0; i < num; i++) {
        Node *tmp = q.front();
        q.pop();
        for (auto nod : tmp->children) {
          q.push(nod);
        }
      }
      count++;
    }
    return count;
  }
};

// point1;for DFS,use queue.
// point2:do not put q.size() in the for loop as it changes every iteration.
