class Solution {
public:
    TreeNode *bst(vector<int>&preorder,int& index,int lower,int upper){
        if(index==preorder.size()||preorder[index]<lower||preorder[index]>upper){
            return NULL;
        }
        TreeNode *root=new TreeNode(preorder[index++]);
        root->left=bst(preorder,index,lower,root->val);
        root->right=bst(preorder,index,root->val,upper);
        return root;


    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int index=0;
        TreeNode* root=bst(preorder,index,INT_MIN,INT_MAX);
        return root;
    }
};
