class Solution {
public:
  
    bool isCompleteTree(TreeNode* root) {
        bool past=false;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            while(n--){
                TreeNode* node=q.front();
                q.pop();
                if(node==NULL){
                    past=true;
                }
                else{
                    if(past==true){
                        return false;
                    }
                    else{
                        q.push(node->left);
                        q.push(node->right);
                    }
                }
            }
        }
        return true;

        
    }
};
