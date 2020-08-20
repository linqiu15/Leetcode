//--------------------Description----------
// Given an n-ary tree, return the preorder traversal of its nodes' values.
// Nary-Tree input serialization is represented in their level order traversal,
// each group of children is separated by the null value (See examples). Follow
// up: Recursive solution is trivial, could you do it iteratively?
//--------------------Results--------------
// Runtime: 44 ms, faster than 71.81% of C++ online submissions for N-ary Tree
// Preorder Traversal. Memory Usage: 11.1 MB, less than 81.29% of C++ online
// submissions for N-ary Tree Preorder Traversal.
#include <stack>
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
  vector<int> preorder(Node *root) {
    // iteratively
    vector<int> rarray;
    stack<Node *> s;
    s.push(root);
    while (!s.empty()) {
      Node *p = s.top();
      s.pop();
      if (p) {
        rarray.push_back(p->val);
        for (int i = p->children.size(); i > 0; i--) {
          s.push(p->children[i - 1]);
        }
      }
    }
    return rarray;
  }
};
