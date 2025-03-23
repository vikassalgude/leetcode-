class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(!root)return ans;

        queue<TreeNode*>q;
        bool flag=1;
        q.push(root);
        while(!q.empty()){
            vector<int>temp;
            int n=q.size();
            while(n--){
                TreeNode* k=q.front();
                q.pop();
                temp.push_back(k->val);
                if(k->left){
                    q.push(k->left);
                }
                if(k->right){
                    q.push(k->right);
                }
            }
            if(flag==false){
                reverse(temp.begin(),temp.end());
                ans.push_back(temp);
                flag=!flag;
            }
            else{
                ans.push_back(temp);
                flag=!flag;
            }
        }
        return ans;

       
    }

};
