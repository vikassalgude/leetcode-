class Solution {
public:
    bool evaluateTree(TreeNode* root) {
      if(root->val==0&&!root->left&&!root->right)return false;
      else if(root->val==1&&!root->left&&!root->right) return true;
      else if(root->val==2){
        return evaluateTree(root->left)||evaluateTree(root->right);
      }
      else{
        return evaluateTree(root->left)&&evaluateTree(root->right);
      }
    }
};
