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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        if(list1==NULL) return list2;
        if(list2==NULL) return list1;

        ListNode *p=list1, *q=list2 ;
        ListNode *r=new ListNode();
        ListNode *cur=r;
        //ListNode *a=&r;
        for(    ;   ;    ){
            
            if( p==NULL && q==NULL) break;
            ListNode *x=new ListNode();
            if(p==NULL){

                x->val=q->val;
                cur->next=x;
                q=q->next;
                cur=x;
               // cout<<"1";
            }
            else if (q==NULL){

                x->val=p->val;
                cur->next=x;
                p=p->next;
                cur=x;
               // cout<<"2";

            }
            else if( (p->val) <= (q->val)  ){

                x->val=p->val;
                cur->next=x;
                p=p->next;
                cur=x;
              //  cout<<"3";
            }
            else{
                x->val=q->val;
                cur->next=x;
                q=q->next;
                cur=x;
              //  cout<<"4";

            }
        }
        return r->next;
        // while(p!=1){

        //      cout<<p->val<<',';
        //      p=p->next;
        // }
        // r->val=5;
        // r->next=list1;

        // cout<<(r->next->val);
    }
};