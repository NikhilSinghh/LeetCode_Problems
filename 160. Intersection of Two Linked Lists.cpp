/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
      vector<int> a,b;
    ListNode *t=headA;

    while(t->next!=NULL){
        a.push_back(t->val);
    }

    t=headB;

    while(t->next!=NULL){
        b.push_back(t->val);
    }

    t=headA;
    for(int i=a.size()-1, j=b.size()-1; i>=0 && j>=0; i--, j--){
      if(a[i]!=b[i])
       {
         t->val=a[i+1];
         return t;
       }
    }
return NULL;
        
    }
};
