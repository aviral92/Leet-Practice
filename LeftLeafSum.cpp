//Find the sum of all left leaves in a given binary tree.

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        if(root == NULL)
            return 0;
        else if(root->left == NULL && root->right == NULL)
            return 0;
        else{
             if(root->left != NULL && root->left->left == NULL && root->left->right == NULL){
                return root->left->val + sumOfLeftLeaves(root->right);
            }
            
            return sumOfLeftLeaves(root->left) + sumOfLeftLeaves(root->right);
       }
    }
};
