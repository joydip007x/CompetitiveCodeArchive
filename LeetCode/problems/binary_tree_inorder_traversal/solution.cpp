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
    vector<int>glob;
    void recTraverse(TreeNode* root){
        if(root==NULL) return;
        recTraverse(root->left);
        glob.push_back(root->val);
        recTraverse(root->right);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        recTraverse(root);
        return glob;
    }
};