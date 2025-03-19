class Solution {
public:
    vector<vector<int>> ans;
    void helper(TreeNode* root,int sum,int x,vector<int>temp){
    if(!root)return;
    
    if(root){
    sum+=root->val;
    temp.push_back(root->val);
    }
    if(sum==x&&!root->left&!root->right){
        ans.push_back(temp);
    }
    helper(root->left,sum,x,temp);
    
    helper(root->right,sum,x,temp);
    temp.pop_back();
    sum-=root->val;

    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        if(!root)return ans;
        vector<int>temp;
        int sum=0;
        int x=targetSum;
        helper(root,sum,x,temp);
        return ans;
    }
};
