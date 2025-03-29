class Solution {
public:
    long long calculateSum(vector<long long> values) {
        long long totalSum = 0;
        for (int i = 0; i < values.size(); i++) {
            totalSum += values[i];
            // You can add a check here for overflow if necessary
        }
        return totalSum;
    }

    long long kthLargestLevelSum(TreeNode* root, int k) {
        long long maxSum = INT_MIN;
        queue<TreeNode*> nodeQueue;
        nodeQueue.push(root);
        vector<long long> b;  // To store the level sums

        while (!nodeQueue.empty()) {
            int levelSize = nodeQueue.size();
            vector<long long> levelValues;

            for (int i = 0; i < levelSize; i++) {
                TreeNode* currentNode = nodeQueue.front();
                nodeQueue.pop();
                levelValues.push_back(currentNode->val);

                if (currentNode->left) nodeQueue.push(currentNode->left);
                if (currentNode->right) nodeQueue.push(currentNode->right);
            }

            long long currentLevelSum = calculateSum(levelValues);
            b.push_back(currentLevelSum);
        }

        // Sort the sums in descending order
        sort(b.rbegin(), b.rend());

        // Ensure k is valid, i.e., it doesn't exceed the number of levels
        if (k > b.size()) {
            // throw std::invalid_argument("k exceeds the number of levels in the 
            // tree");
            return -1;
        }

        // Return the k-th largest sum
        return b[k-1];
    }
};
