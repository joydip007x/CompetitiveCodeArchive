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
    ListNode* mergeNodes(ListNode* head) {
        int val=0;
        ListNode* node=head;
        ListNode* ret=node;
        while(head != NULL){
            if(head->val==0 && val){  
                node->val=val;
                if(head->next)node=node->next;
                val=0;
                continue;
           }
           val+=head->val;
           head=head->next;
        }
        node->next=NULL;
        return ret;
    }
};