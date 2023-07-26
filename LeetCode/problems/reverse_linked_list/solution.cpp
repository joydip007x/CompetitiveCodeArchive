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
    ListNode* reverseList(ListNode* head) {

        if(head==NULL || head->next==NULL) return head;
        if(head->next->next==NULL){
            head->next->next=head;
            ListNode* x=head->next;
            head->next=nullptr;
            return x;
        }
        ListNode* p=head;
        head=head->next;
        ListNode* c=head->next;
        p->next=nullptr;
        while(c!=NULL  ){
             
            //  cout<<"HEAD "<<head->val<<": C : "<<c->val<<endl;
             head->next=p;
             if(c->next==NULL){
                 c->next=head;
                 break;
             }
             p=head;
             head=c;
             c=c->next;
        }
        return c;
    }
};