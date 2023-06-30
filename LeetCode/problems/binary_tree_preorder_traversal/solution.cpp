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
    vector<int> preorderTraversal(TreeNode* root) {
        if(root==NULL) return {};
        vector<int>v;
        stack<TreeNode*>q;
        q.push(root);

        while(!q.empty()){
            TreeNode* p=q.top();
            q.pop();
            v.push_back(p->val);
            if(p->right)q.push(p->right);
            if(p->left) q.push(p->left);
           
        }

        return v;
    }
};