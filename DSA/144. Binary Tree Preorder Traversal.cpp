class Solution {
public:
    void inot(TreeNode* root,vector<int>&ans){
        if(root==NULL){
            return;
        }
        ans.push_back(root->val);
        inot(root->left,ans);
        inot(root->right,ans);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>ans;
        inot(root,ans);
        return ans;
    }
};
