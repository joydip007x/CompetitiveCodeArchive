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

    bool trav( TreeNode* root, int cnt, int target){
        if(root==NULL) return false;
        if(root->left==NULL &&  root->right==NULL) return cnt+root->val==target;
        return trav(root->left,root->val+cnt,target) ||
               trav(root->right,root->val+cnt,target) ;

    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==NULL)return false;
        bool f= trav(root,0,targetSum);
        return f;
    }
};