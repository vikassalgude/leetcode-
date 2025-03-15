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
    int find(TreeNode* root, int& diameter) {
        if (!root) return 0; // Base case: empty tree
        
        // Recursively calculate the depth of left and right subtrees
        int leftDepth = find(root->left, diameter);
        int rightDepth = find(root->right, diameter);
        
        // Update the diameter if the current path is longer
        diameter = max(diameter, leftDepth + rightDepth);
        
        // Return the depth of the current subtree
        return 1 + max(leftDepth, rightDepth);
    }

    int diameterOfBinaryTree(TreeNode* root) {
        
        int diameter = 0; // Initialize diameter
        find(root, diameter); // Calculate diameter
        return diameter; // Return the calculated diameter
    }
};
