class Solution {
public:
    void POT(TreeNode *root,vector<int>&ans){
        if(!root){
            return;
        }
        POT(root->left,ans);
        POT(root->right,ans);
        ans.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>ans;
        POT(root,ans);
        return ans;
    }
};
