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
    int trav(TreeNode* root,int cnt){

        if( root==NULL) return INT_MAX;
        if( root->left==NULL && root->right==NULL) return cnt;
        return min(trav(root->left,cnt+1),trav(root->right,cnt+1));
    }
    int minDepth(TreeNode* root) {
        return (root==NULL)? 0:trav(root,1);
    }
};