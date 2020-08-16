//--------------------Description----------
// Given two binary trees and imagine that when you put one of them to cover the
// other, some nodes of the two trees are overlapped while the others are not.

// You need to merge them into a new binary tree. The merge rule is that if two
// nodes overlap, then sum node values up as the new value of the merged node.
// Otherwise, the NOT null node will be used as the node of new tree.
//--------------------Results--------------
// Runtime: 48 ms, faster than 61.64% of C++ online submissions for Merge Two
// Binary Trees. Memory Usage: 22 MB, less than 59.32% of C++ online submissions
// for Merge Two Binary Trees. Definition for a binary tree node.
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
  TreeNode *mergeTrees(TreeNode *t1, TreeNode *t2) {
    if (t1 && t2) {
      t1->val = t1->val + t2->val;
      t1->left = mergeTrees(t1->left, t2->left);
      t1->right = mergeTrees(t1->right, t2->right);
      return t1;
    } else if (t1 && !t2) {
      return t1;
    } else if (!t1 && t2) {
      return t2;
    }
    return nullptr;
  }
};
