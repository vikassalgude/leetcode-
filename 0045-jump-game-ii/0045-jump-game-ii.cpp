class Solution {
public:
    int jump(vector<int>& nums) {
        //  int n = arr.size();
        // if (n <= 1) return 0;
        // if (arr[0] == 0) return -1;

        // int cnt = 0;
        // int i = 0;

        // while (i < n - 1) {
        //     int j = arr[i];
        //     if (j == 0) return -1;

        //     cnt++;

        //     if (i + j >= n - 1) return cnt;

        //     int idx = -1;
        //     int maxE = INT_MIN;

        //     for (int k = i + 1; k <= i + j && k < n; k++) {
        //         if (arr[k] + k > maxE) {
        //             maxE = arr[k] + k;
        //             idx = k;
        //         }
        //     }

        //     if (idx != -1) i = idx;
        //     else return -1;
        // }

        // return cnt;
        int totalJumps = 0;
        int destination = nums.size() - 1;
        int coverage = 0;
        int lastJumpIdx = 0;

        if (nums.size() <= 1) {
            return 0;
        }

        for (int i = 0; i < nums.size(); ++i) {
            coverage = max(coverage, i + nums[i]);

            if (i == lastJumpIdx) {
                lastJumpIdx = coverage;
                totalJumps++;

                if (coverage >= destination) {
                    return totalJumps;
                }
            }
        }

        return totalJumps;
    }
};