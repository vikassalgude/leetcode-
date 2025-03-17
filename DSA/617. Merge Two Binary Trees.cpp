class Solution {
public:

    // TreeNode* bst(TreeNode* root1,TreeNode* root2,TreeNode* root){
    //      if(!root1&&!root2){
    //         return NULL;
    //     }

    //     else if(root1&&root2){
    //         root=new TreeNode(root1->val+root2->val);
    //     }
    //     else if(root1&&!root2){
    //         return root1;
    //     }
    //     else{
    //         return root2;
    //     }
    //     root->left=mergeTrees(root1->left,root2->left);
    //     root->right=mergeTrees(root1->right,root2->right);
    //     return root;
        
        
    // }
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        // if(!root1&&root2)return root2;
        // if(root1&&!root2)return root1;

        
        // TreeNode* root;
        // return bst(root1,root2,root);
        if (!root1) return root2;
        if (!root2) return root1;

        TreeNode* root = new TreeNode(root1->val + root2->val);
        root->left = mergeTrees(root1->left, root2->left);
        root->right = mergeTrees(root1->right, root2->right);
        return root;
        
    }
};
