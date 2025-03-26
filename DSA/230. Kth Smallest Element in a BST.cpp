class Solution {
public:
    // void inorder(TreeNode* root,vector<int>&arr){
    //     if(!root)return;
    //     inorder(root->left,arr);
    //     arr.push_back(root->val);
    //     inorder(root->right,arr);
    // }
    int kthSmallest(TreeNode* root, int k) {
        // vector<int>arr;
        // inorder(root,arr);
        // return arr[k-1];
        stack<TreeNode*> stk;
        TreeNode* current = root;
        int count = 0;

        while (current != nullptr || !stk.empty()) {
            while (current != nullptr) {
                stk.push(current);
                current = current->left; // Go to leftmost node
            }
            current = stk.top();
            stk.pop();
            count++;
            if (count == k) return current->val; // Return when we reach the k-th smallest
            current = current->right; // Move to right subtree
        }

        return -1; // This line should never be reached if k is valid
    }
};
