//--------------------Description----------
// Given a binary search tree, rearrange the tree in in-order so that the
// leftmost node in the tree is now the root of the tree, and every node has no
// left child and only 1 right child.
//--------------------Results--------------
// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Increasing
// Order Search Tree. Memory Usage: 7.5 MB, less than 68.21% of C++ online
// submissions for Increasing Order Search Tree.
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
  TreeNode *increasingBST(TreeNode *root) {
    // iterally travesal in-order
    TreeNode *rroot = root;
    while (rroot->left) {
      rroot = rroot->left;
    }

    // exclude first node to avoid repeating
    bool isfirst = true;
    TreeNode *current = rroot;
    stack<TreeNode *> s;
    TreeNode *p = root;
    while (p || !s.empty()) {
      if (p) {
        s.push(p);
        p = p->left;
      } else {
        p = s.top();
        s.pop();
        // add node
        if (isfirst) {
          isfirst = !isfirst;
        } else {
          p->left = nullptr;
          current->right = p;
          current = p;
        }

        p = p->right;
      }
    }
    return rroot;
  }
};
