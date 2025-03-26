class Solution {
public:
    void help(TreeNode*root,int&ans){
        if(!root)return;
        help(root->left,ans);
        ans++;
        help(root->right,ans);
    }
    int countNodes(TreeNode* root) {
        int ans=0;
        help(root,ans);
        return ans;
    }
};
