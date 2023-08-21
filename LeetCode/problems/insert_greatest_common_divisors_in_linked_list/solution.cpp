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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {     
        if(head->next ==NULL) return head;
        ListNode* f=head;
        ListNode* s=head->next;

        while(s!=NULL){

          //  cout<<"0th: "<<f->val<<endl;
            int y= __gcd(f->val, s->val); //find_gcd(f->val,s->val);
            ListNode* x= new ListNode(y,s);
           // cout<<"1st:"<<x.val<<" & NEXT "<<x.next->val<<endl;
            f->next= x;
            f=s;
            if(s->next==NULL) break;
           // cout<<"2nd :"<<s->val<<endl;
            s=s->next;
        }
        return head;

    }
};