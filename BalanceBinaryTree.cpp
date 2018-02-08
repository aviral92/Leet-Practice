/*Given a binary tree, determine if it is height-balanced.

For this problem, a height-balanced binary tree is defined as:*/

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
   
int max(int a, int b)
{
  return (a >= b)? a: b;
}  
int height(struct TreeNode* tree){
    
    if(tree== NULL){
        
        return 0;
    }
    
    else{
        
        return (1+max(height(tree->left),height(tree->right)));
    }
}
bool isBalanced(struct TreeNode* root) {
    //int h = height(root);
    if(root == NULL)
        return true;
    
    if( abs(height(root->left) - height(root->right)) <=1 && isBalanced(root->left) && isBalanced(root->right)){
        cout<<"return here";
        return true;
    }
    
    
    return false;
  }
    
};
