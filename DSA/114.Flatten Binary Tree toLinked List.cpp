class Solution {
public:
    void flatten(TreeNode* root) {
        while(root){
        if(!root->left){
            root=root->right;
        }
        else{
            TreeNode* curr=root->left;
            while(curr->right){
                curr=curr->right;
            }
            curr->right=root->right;
            root->right=root->left;
            root->left=nullptr;
            root=root->right;
        }
        }
    }
};
