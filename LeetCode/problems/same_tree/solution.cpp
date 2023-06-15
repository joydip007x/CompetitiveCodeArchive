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
    string traverseTree(TreeNode* root,string s,string ex){
        if(root==NULL){return " ";}
        s+=traverseTree(root->left,"","L");
        s+=to_string(root->val)+ex;
        s+=traverseTree(root->right,"","R");
        return s;
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        return traverseTree(p,"","R")==traverseTree(q,"","R");
    }
};