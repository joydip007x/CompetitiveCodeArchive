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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *Prev,*Cur;
        Prev=head; Cur=head;
        while(Cur!=NULL){
           if(Prev->val == Cur->val){
               while(Cur->next!=NULL and Cur->val== Cur->next->val)Cur=Cur->next;
               Prev->next=Cur->next;
           }
           Cur=Cur->next;
           Prev=Prev->next;
        }
        return head;
    }
};