class Solution {
public:
    TreeNode * createbst(vector<int>&tree,int start,int end){
        if(start>end)return NULL;
        int mid=start+(end-start+1)/2;
        TreeNode* root=new TreeNode(tree[mid]);
        root->left=createbst(tree,start,mid-1);
        root->right=createbst(tree,mid+1,end);
        return root;
        
    }
  
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return createbst(nums,0,nums.size()-1);
    }
};
