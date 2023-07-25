/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {

        if(head==NULL) return head;
        ListNode* r=head->next;
        ListNode* p=head;

        while( r!= NULL ){
              
              while(r!=NULL && r->val==val){ r=r->next; }
              p->next=r;
              p=r;
              if(r!=NULL) r=r->next;
        }
        return (head->val==val)? head->next:head;
    }
};