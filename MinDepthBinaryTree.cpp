/*
Given a binary tree, find its minimum depth.

The minimum depth is the number of nodes along the shortest path from the root node down to the nearest leaf node.
*/

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
    int minDepth(TreeNode* root) {
         if(root== NULL)
            return 0;
        else if(root->left== NULL)
            return 1+ minDepth(root ->right);
        else if(root->right== NULL)
            return 1+ minDepth(root ->left);
        else {
            int l = minDepth(root ->left);
            int r = minDepth(root ->right);
            if(l<r)
                return l+1;
            else
                return r+1;
        }
    }
};
