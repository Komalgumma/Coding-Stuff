/**
 * Definition for singly-linked list.
 */
#include <iostream>

 struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
       ListNode* l3 = new ListNode();
       ListNode* p1 = l1;
       ListNode* p2 = l2;
       ListNode* p3 = l3;
       int s = 0;
       while(p1 != nullptr || p2 != nullptr ){        
        int v = s;
        if(p1){
            v += p1->val;
            p1 = p1->next;
        }
        if(p2){
            v += p2->val;
            p2 = p2->next;
        }
        p3->val = v%10;
        s = v/10;
        if(p1 != nullptr || p2 != nullptr){
            p3->next = new ListNode();
            p3 = p3->next;
        }
       }
       if (s>0){
        p3->next = new ListNode(s);
       }
       return l3;
    }
};