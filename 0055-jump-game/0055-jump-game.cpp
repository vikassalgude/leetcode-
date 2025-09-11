class Solution {
public:
    bool canJump(vector<int>& arr) {
        int n = arr.size();
        if (n == 1) return true;       // already at last index
        if (arr[0] == 0) return false; // stuck at start

        int i = 0;
        while (i < n - 1) {
            int j = arr[i];
            if (j == 0) return false;
            if (i + j >= n - 1) return true;

            int idx = -1;
            int maxE = INT_MIN;
            for (int k = i + 1; k <= i + j && k < n; k++) {
                if (arr[k] + k > maxE) {
                    maxE = arr[k] + k;
                    idx = k;
                }
            }

            if (idx != -1) {
                i = idx;   // move to the best next index
            } else {
                return false; // no progress possible
            }
        }
        return false;
    }
};
