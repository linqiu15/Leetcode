#include <iostream>
#include <vector>

// using namespace std;
// struct ListNode {
//   int val;
//   ListNode *next;
//   ListNode() : val(0), next(nullptr) {}
//   ListNode(int x) : val(x), next(nullptr) {}
//   ListNode(int x, ListNode *next) : val(x), next(next) {}
// };


class Solution {
public:
  ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    int residue=0,tmp;
    ListNode *p=l1;
    while(l1->next&&l2->next){
      tmp=(l1->val+l2->val+residue)%10;
      residue=(l1->val+l2->val+residue)/10;
      l1->val=tmp;
      l1=l1->next;
      l2=l2->next;
    }
    tmp=(l1->val+l2->val+residue)%10;
    residue=(l1->val+l2->val+residue)/10;
    l1->val=tmp;
    
    if(!l1->next&&!l2->next){
      if(residue){
	l1->next=new ListNode(residue);
      }
    }else if(l1->next){
      while(l1->next){
	tmp=(l1->next->val+residue)%10;
	residue=(l1->next->val+residue)/10;
	l1->next->val=tmp;
	l1=l1->next;
      }
      if(residue){
	l1->next=new ListNode(residue);
      }
    }else{
      l2=l2->next;
      while(l2){
	l1->next=new ListNode((l2->val+residue)%10);
	residue=(l2->val+residue)/10;
	l2=l2->next;
	l1=l1->next;
      }
      if(residue){
	l1->next=new ListNode(residue);
      }
    }
    return p;
  }
};
