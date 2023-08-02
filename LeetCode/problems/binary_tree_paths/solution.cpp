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
    vector<string>ans;
    void trav(TreeNode* root, string s){

        //cout<<"CUR "<<root->val<<endl;
        if( root==NULL  ) return;
        if(root->left==NULL && root->right==NULL ) {
            ans.push_back(s+to_string(root->val));
            return ;
        }
        trav(root->left,s+to_string(root->val)+"->");
        trav(root->right,s+to_string(root->val)+"->");
        return;

    }
    vector<string> binaryTreePaths(TreeNode* root) {
        trav(root,"");
        return ans;
    }
};