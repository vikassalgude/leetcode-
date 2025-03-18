class Solution {
public:
   
  bool hasPathSum(TreeNode* root, int targetSum) {
    if (!root) return false; // Return false for an empty tree

    stack<TreeNode*> s1; // Stack for TreeNode pointers
    stack<int> s2; // Stack for cumulative sums

    s1.push(root); // Start with the root node
    s2.push(root->val); // Start with the root's value

    while (!s1.empty()) {
        TreeNode* temp = s1.top(); // Get the current node
        s1.pop(); // Remove it from the stack
        int sum = s2.top(); // Get the current sum
        s2.pop(); // Remove it from the stack

        // Check if it's a leaf node and if the sum matches targetSum
        if (sum == targetSum && !temp->left && !temp->right) {
            return true; // Path found
        }

        // Push right child and updated sum if it exists
        if (temp->right) {
            s1.push(temp->right);
            s2.push(temp->right->val + sum);
        }

        // Push left child and updated sum if it exists
        if (temp->left) {
            s1.push(temp->left);
            s2.push(temp->left->val + sum);
        }
        }
    
  return false;
      
  }
};
