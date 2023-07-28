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

    void doInvert(TreeNode* root,TreeNode* L,TreeNode* R){

        if(root==NULL || (L==NULL && R==NULL )) return;
        if(L !=NULL ){   
            doInvert(L,(L->left !=NULL )? L->left : NULL ,(L->right !=NULL )? L->right: NULL );
            
        }

        if(R !=NULL){
           doInvert(R,(R->left !=NULL )? R->left:NULL ,(R->right !=NULL )? R->right:NULL);
           
        }
        root->right=L;
        root->left=R;
        return ;
    }

    TreeNode* invertTree(TreeNode* root) {

        if(root==NULL) return root;
        doInvert(root, (root->left!=NULL) ?root->left: NULL ,(root->right) ? root->right: NULL );
        return root;

    }
};