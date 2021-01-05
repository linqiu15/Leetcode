//--------------------Description----------
// A binary tree is univalued if every node in the tree has the same value.

// Return true if and only if the given tree is univalued.
//--------------------Results--------------
// Runtime: 4 ms, faster than 73.40% of C++ online submissions for Univalued
// Binary Tree. Memory Usage: 10.4 MB, less than 5.12% of C++ online submissions
// for Univalued Binary Tree.
#include <stack>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right)
      : val(x), left(left), right(right) {}
};
class Solution {
public:
  bool isUnivalTree(TreeNode *root) {
    // iterately traversal
    stack<TreeNode *> s;
    int val = root->val;
    s.push(root);
    while (!s.empty()) {
      TreeNode *tmp = s.top();
      s.pop();
      if (tmp) {
        if (val != tmp->val)
          return false;
        if (tmp->right)
          s.push(tmp->right);
        if (tmp->left)
          s.push(tmp->left);
      }
    }
    return true;
  }
};
