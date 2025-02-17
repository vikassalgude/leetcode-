class Solution {
public:
    /**
     * @brief Finds the maximum value in a vector of integers.
     * 
     * This function iterates through the input vector and keeps track of the largest
     * value encountered so far. If the input vector is empty, it returns -1.
     * 
     * @param arr A constant reference to the vector of integers to search.
     * @return The maximum value in the vector, or -1 if the vector is empty.
     */
    int findMaxValue(const std::vector<int>& arr) {
        // If the array is empty, return -1 to indicate no maximum value.
        if (arr.empty()) {
            return -1;
        }
        
        // Initialize maxValue with the first element of the array.
        int maxValue = arr[0];
        
        // Iterate through the array starting from the second element.
        for (size_t i = 1; i < arr.size(); ++i) {
            // Update maxValue if the current element is greater.
            maxValue = std::max(maxValue, arr[i]);
        }
        
        // Return the maximum value found.
        return maxValue;
    }

    /**
     * @brief Finds the largest value in each level of a binary tree.
     * 
     * This function performs a level-order traversal of the binary tree. For each level,
     * it collects the values of all nodes at that level and then finds the maximum value
     * among them using the findMaxValue function. The maximum values for each level are
     * stored in a vector and returned.
     * 
     * @param root The root node of the binary tree.
     * @return A vector containing the largest value from each level of the tree.
     */
    vector<int> largestValues(TreeNode* root) {
        // Initialize the result vector to store the largest values of each level.
        vector<int> ans;
        
        // If the tree is empty, return an empty vector.
        if (!root) return ans;
        
        // Create a queue for level-order traversal.
        queue<TreeNode*> q;
        
        // Push the root node into the queue to start the traversal.
        q.push(root);
        
        // Continue the traversal as long as the queue is not empty.
        while (!q.empty()) {
            // Get the number of nodes at the current level.
            int size = q.size();
            
            // Create a vector to store the values of nodes at the current level.
            vector<int> level;
            
            // Process all nodes at the current level.
            while (size-- > 0) {
                // Get the front node from the queue.
                TreeNode* tmp = q.front();
                
                // Remove the front node from the queue.
                q.pop();
                
                // Add the value of the current node to the level vector.
                level.push_back(tmp->val);
                
                // Enqueue the left child if it exists.
                if (tmp->left) {
                    q.push(tmp->left);
                }
                
                // Enqueue the right child if it exists.
                if (tmp->right) {
                    q.push(tmp->right);
                }
            }
            
            // Find the maximum value in the level vector.
            int a = findMaxValue(level);
            
            // Add the maximum value to the result vector.
            ans.push_back(a);
        }
        
        // Return the vector containing the largest values from each level.
        return ans; 
    }
};
