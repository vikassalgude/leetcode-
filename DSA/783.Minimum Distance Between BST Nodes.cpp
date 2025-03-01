class Solution {
public:
    void inorder(TreeNode *root,vector<int>&ans){
        if(!root){
            return;
        }
        inorder(root->left,ans);
        ans.push_back(root->val);
        inorder(root->right,ans);
    }
    int minDiffInBST(TreeNode* root) {
       vector<int>ans;
        inorder(root,ans);
        int result=INT_MAX;
        for(int i=0;i<ans.size()-1;i++){
            int diff=ans[i+1]-ans[i];
            result=min(result,diff);
        } 
        return result;
    }
};
