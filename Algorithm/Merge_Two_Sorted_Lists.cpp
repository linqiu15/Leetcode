#include <iostream>
// * Definition for singly-linked list.
struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
  ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {
    ListNode *res, *tmp;

    if (!l1 && !l2)
      return NULL;
    else if (l1 && !l2)
      return l1;
    else if (!l1 && l2)
      return l2;
    else {
      if (l1->val <= l2->val) {
	tmp = res = l1;
	l1 = l1->next;
      } else {
	tmp = res = l2;
	l2 = l2->next;
      }
    }

    while (l1 && l2) {
      if (l1->val <= l2->val) {
	tmp->next = l1;
	tmp = l1;
	l1 = l1->next;
      } else {
	tmp->next = l2;
	tmp = l2;
	l2 = l2->next;
      }
    }
    if (l1) {
      tmp->next = l1;
    } else {
      tmp->next = l2;
    }

    return res;
  }
};
