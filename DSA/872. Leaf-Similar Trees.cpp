// Intuition
// When approaching this problem, the first thought is to understand what it means for two binary trees to be leaf-similar. Two trees are leaf-similar if their leaf values are the same when read from left to right. This implies that we need to traverse both trees, collect the leaf node values in order, and then compare these collections.

// Approach
// To solve this problem, we will:

// 1.Define a Helper Function: Create a function that traverses a binary tree and collects the values of all leaf nodes in a vector.

// 2.Traverse Both Trees: Use the helper function to collect leaf node values from both trees.

// 3.Compare Leaf Node Values: Compare the vectors of leaf node values from both trees. If they are identical, the trees are leaf-similar.

// Complexity
// Time complexity:
// Time complexity: O(n+m)
// Here,n and m are the number of nodes in the first and second trees, respectively. This is because we visit each node once in both trees.

// Space complexity:
// Space complexity:
// O(h1+h2)
// Here,h1 and h2 are the heights of the first and second trees, respectively. This is due to the maximum recursion depth in the worst case (when trees are skewed). However, if we consider the space needed to store the leaf node values, it would be O(n+m) in the worst case if all nodes are leaves. But typically, for the recursion stack alone, it's O(h1+h2).

// Code
class Solution {
public:
    void add(TreeNode* root, vector<int>& leafValues) {
        if (!root) return;
        if (!root->left && !root->right) {
            leafValues.push_back(root->val);
        }
        add(root->left, leafValues);
        add(root->right, leafValues);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> leafValues1;
        vector<int> leafValues2;
        add(root1, leafValues1);
        add(root2, leafValues2);
        
        return leafValues1 == leafValues2;
    
    }
};
