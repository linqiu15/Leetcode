#include <vector>
using namespace std;

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
  vector<int> postorder(Node *root) {
    vector<int> rarray;
    if (!root)
      return rarray;
    if (!root->children.size()) {
      rarray.push_back(root->val);
      return rarray;
    }
    for (int i = 0; i < root->children.size(); i++) {
      vector<int> tmpv = postorder(root->children[i]);
      rarray.insert(rarray.end(), tmpv.begin(), tmpv.end());
    }
    rarray.push_back(root->val);
    return rarray;
  }
};
