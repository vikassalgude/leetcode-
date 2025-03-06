/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void find(TreeNode*root,int n1,int n2,vector<int>&ans){
        if(!root){
            return;
        }
        if(root->val>n1&&root->val>n2){
            find(root->left,n1,n2,ans);
        }
        else if(root->val<n1&&root->val<n2 ){
            find(root->right,n1,n2,ans);
        }
        else{
            find(root->left,n1,n2,ans);
            ans.push_back(root->val);
            find(root->right,n1,n2,ans);
        }
    } 
    int rangeSumBST(TreeNode* root, int low, int high) {
        vector<int>ans;
        find(root,low,high,ans);
        int sum=0;
        for(int i=0;i<ans.size();i++){
            sum+=ans[i];
        }
        return sum;
    }
};
