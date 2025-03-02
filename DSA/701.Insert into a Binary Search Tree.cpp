class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int target) {
        if(!root){
        TreeNode* temp=new TreeNode( target);
        return temp;
        }
        if(target<root->val){
        root->left=insertIntoBST(root->left,target);
        }
        else{
        root->right=insertIntoBST(root->right,target);
        }
        return root;
    }
};
