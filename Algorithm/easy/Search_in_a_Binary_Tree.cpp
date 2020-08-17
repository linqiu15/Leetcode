//--------------------Description----------
// Given the root node of a binary search tree (BST) and a value. You need to
// find the node in the BST that the node's value equals the given value. Return
// the subtree rooted with that node. If such node doesn't exist, you should
// return NULL.
//--------------------Results--------------
// Runtime: 64 ms, faster than 82.43% of C++ online submissions for Search in a
// Binary Search Tree. Memory Usage: 34.8 MB, less than 47.47% of C++ online
// submissions for Search in a Binary Search Tree. Definition for a binary tree
// node.
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
  TreeNode *searchBST(TreeNode *root, int val) {
    if (!root)
      return nullptr;
    if (root->val == val) {
      return root;
    } else if (root->val > val) {
      return searchBST(root->left, val);
    }
    return searchBST(root->right, val);
  }
};
