class Solution {
public:
    void helper(TreeNode* root,int&count,int a){
        if(!root){
            return ;
        }
        if(root->val>=a){
            count++;
            a=root->val;
        }
        helper(root->left,count,a);
        helper(root->right,count,a);

    }
    int goodNodes(TreeNode* root) {
        if(!root)return 0;
        int count=0;
        int a=root->val;
        helper(root,count,a);
        return count;
    }
};
