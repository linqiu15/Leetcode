//--------------------Description----------
// Given a non-empty, singly linked list with head node head, return a middle
// node of linked list.

// If there are two middle nodes, return the second middle node.
//--------------------Results--------------
// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Middle of
// the Linked List. Memory Usage: 6.5 MB, less than 87.67% of C++ online
// submissions for Middle of the Linked List. Definition for singly-linked list.
struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution {
public:
  ListNode *middleNode(ListNode *head) {
    int len = 0;
    ListNode *p = head;
    while (p) {
      len++;
      p = p->next;
    }
    int dep = 0;
    while (dep < len / 2) {
      head = head->next;
      dep++;
    }
    return head;
  }
};
