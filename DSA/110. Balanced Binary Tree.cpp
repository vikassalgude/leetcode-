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
    int getHeight(TreeNode* node) {
    if (!node) {
        return 0;
    }
    return 1 + max(getHeight(node->left), getHeight(node->right));
    }
    bool isBalanced(TreeNode* root) {
        if(!root){
            return 1;
        }
       
        int left = getHeight(root->left);
        int right = getHeight(root->right);
        if(abs(left-right)>1){
            return 0;
        }
        else{
            return isBalanced(root->left) && isBalanced(root->right);
        }
    }
};
