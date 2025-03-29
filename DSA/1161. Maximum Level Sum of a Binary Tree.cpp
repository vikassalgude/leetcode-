class Solution {
public:
    // Function to calculate the sum of elements in a vector
    int calculateSum(vector<int> values) {
        int totalSum = 0;
        for (int i = 0; i < values.size(); i++) {
            totalSum += values[i];
        }
        return totalSum;
    }

    
    // Main function to find the maximum level sum in a binary tree
    int maxLevelSum(TreeNode* root) {
        int maxSum = INT_MIN;  // Initialize maximum sum to a very small value
        //return findMaxLevel(root, maxSum);
        queue<TreeNode*> nodeQueue;  // Queue for BFS traversal
        nodeQueue.push(root);
        int maxLevel = 0;           // Level with the maximum sum
        int currentLevel = 0;       // Counter for current level

        while (!nodeQueue.empty()) {
            int levelSize = nodeQueue.size();  // Number of nodes at the current level
            vector<int> levelValues;          // Values of nodes at the current level

            for (int i = 0; i < levelSize; i++) {
                TreeNode* currentNode = nodeQueue.front();
                nodeQueue.pop();
                levelValues.push_back(currentNode->val);

                if (currentNode->left) nodeQueue.push(currentNode->left);
                if (currentNode->right) nodeQueue.push(currentNode->right);
            }

            int currentLevelSum = calculateSum(levelValues);  // Sum of values at the current level
            currentLevel++;                                   // Increment level counter

            if (currentLevelSum > maxSum) {                   // Update max sum and level if needed
                maxLevel = currentLevel;
                maxSum = currentLevelSum;
            }
        }
        return maxLevel;

    }
};
