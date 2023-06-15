/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    string s1="",s2="";
    void traverseTree(TreeNode* root,string* s,string ex){
        if(root==NULL){return;}
        traverseTree(root->left,s,"L");
        s->append(to_string(root->val)+ex);
        traverseTree(root->right,s,"R");
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {

        traverseTree(p,&s1,"M");
        traverseTree(q,&s2,"M");
        return s1==s2;
    }
};