class Solution {
public:
    TreeNode* reverseOddLevels(TreeNode* root) {
            queue<TreeNode*> que;

        que.push(root);
        int level = 0;

        while(!que.empty()) {
            int n = que.size();

            vector<TreeNode*> levelNodes;
            while(n--) {
                TreeNode* temp = que.front();
                que.pop();
                levelNodes.push_back(temp);

                if(temp->left) {
                    que.push(temp->left);
                }
                if(temp->right) {
                    que.push(temp->right);
                }
            }
            if(level%2 == 1) {
                int l = 0, r = levelNodes.size()-1;
                while(l < r) {
                    int tempVal = levelNodes[l]->val;
                    levelNodes[l]->val = levelNodes[r]->val;
                    levelNodes[r]->val = tempVal;
                    l++;
                    r--;
                }
            }
            level++;
        }

        return root;
    }
};
