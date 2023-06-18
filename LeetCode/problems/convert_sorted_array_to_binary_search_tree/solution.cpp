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
    TreeNode* solve(vector<int>& a , int s , int e)
    {
        if(s>e)
            return NULL;
        int mid = s + (e-s)/2;
        TreeNode* r = new TreeNode(a[mid]);
        r->left = solve(a,s,mid-1);
        r->right = solve(a,mid+1,e);
        return r;
    }
    
    TreeNode* sortedArrayToBST(vector<int>& a) {
        int n = a.size();
        return solve(a,0,n-1);
        
    }
};