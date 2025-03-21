class Solution {
public:
    int findBottomLeftValue(TreeNode* root) {
        if(!root)return 0;
        vector<int>ans;
        queue<TreeNode*>q;
        TreeNode* node=NULL;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            while(n--){
                node=q.front();
                q.pop();
                if(node->right){
                    q.push(node->right);
                }
                if(node->left){
                    q.push(node->left);
                }
            }
            ans.push_back(node->val);
        }
        int n=ans.size()-1;
        return ans[n];
    }
};
