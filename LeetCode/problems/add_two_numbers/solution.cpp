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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry=0;
        ListNode* r=NULL;
        ListNode* ret=r;
        while( l1 != NULL || l2 != NULL){

            if(r==NULL) {r=new ListNode();ret=r;}
            else {r->next= new ListNode(); r=r->next;}
            int sum= ((l1==NULL)? 0:l1->val) + ((l2==NULL)? 0: l2->val) + carry;
            if(sum>9) carry=1;
            else carry=0;
            r->val=sum%10;

            if(l1!=NULL)l1=l1->next;
            if(l2!=NULL)l2=l2->next;
        }
        if(carry==1){ r->next= new ListNode(carry);}

        return ret;
    }
};