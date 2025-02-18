class Solution {
public:
    void rview(TreeNode* root,int level,vector<int>&ans){
        if(!root){
            return;
        }
        if(level==ans.size()){
            ans.push_back(root->val);
        }
        rview(root->right,level+1,ans);
        rview(root->left,level+1,ans);
        
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int>ans;
        int level=0;
        rview(root,level,ans);
        return ans;
    
    }
};
