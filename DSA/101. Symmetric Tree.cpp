class Solution {
public:
    
    void check(TreeNode* left, TreeNode* right, bool &isValid) {
    if (!left && !right) {
        return;
    }
    if (!left || !right || left->val != right->val) {
        isValid = false;
        return;
    }
    check(left->left, right->right, isValid);
    check(left->right, right->left, isValid);
    }
    bool isSymmetric(TreeNode* root) {
        if(!root) return 1;
        if(!root->left&&root->right)return 0;
        if(root->left&&!root->right)return 0;
        TreeNode* l=root->left;
        TreeNode* r=root->right;
        bool valid=true;
        check(l,r,valid);
        return valid;
    }
};
