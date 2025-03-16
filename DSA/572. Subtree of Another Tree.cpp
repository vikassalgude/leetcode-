class Solution {
public:
 bool isSameTree(TreeNode* p, TreeNode* q) {
        if (!p && !q) return true; // Both nodes are null
        if (!p || !q || p->val != q->val) return false; // Nodes are unequal
        // Recursively check left and right children
        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if (!root) return false; // If root is null, subRoot cannot be a subtree
        // Check if the current subtree matches or recurse on left/right children
        if(isSameTree(root, subRoot))return true;
        else return isSubtree(root->left, subRoot)||isSubtree(root->right,subRoot);
    }
};
