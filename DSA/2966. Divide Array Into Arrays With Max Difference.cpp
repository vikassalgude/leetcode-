class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>result;
        int n=nums.size();
        if(n==0)return {{}};
         for (int i = 0; i < n; i += 3) {
            // Check bounds
            if (i + 2 >= n) return {};

            // Group of 3: nums[i], nums[i+1], nums[i+2]
            if (nums[i+2] - nums[i] > k) return {};

            result.push_back({nums[i], nums[i+1], nums[i+2]});
        }
        return result;
    }
};
