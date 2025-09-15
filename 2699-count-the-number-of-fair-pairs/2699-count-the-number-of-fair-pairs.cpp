// class Solution {
// public:
//     long long countFairPairs(vector<int>& nums, int lower, int upper) {
//         int cnt=0;
//        // for(int i=0;i<nums.size();i++){
//         //     for(int j=i+1;j<nums.size();j++){
//         //         if(lower<=nums[i]+nums[j]&&nums[i]+nums[j]<=upper){
//         //             cnt++;
//         //         }
//         //     }
//         // }
//         sort(nums.begin(),nums.end());
//         for(int i=0;i<nums.size();i++){
//             int j=i+1;
//             int k=nums.size()-1;
//             if(nums[i]+nums[j]>upper)break;
//             while(nums[i]+nums[j]<lower&&j<nums.size())j++;
//             while(nums[i]+nums[k]>upper&&k>=0)k--;
//             if((k-j)<0)continue;
//             cnt+=(k-j+1);
//         }
//         return cnt;
//     }
// };
class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        sort(nums.begin(), nums.end());
        long long cnt = 0;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            int left = lower - nums[i];
            int right = upper - nums[i];

            // Find first index j > i where nums[j] >= left
            auto l = lower_bound(nums.begin() + i + 1, nums.end(), left);
            // Find first index j > i where nums[j] > right
            auto r = upper_bound(nums.begin() + i + 1, nums.end(), right);

            cnt += (r - l); // number of valid j's for this i
        }

        return cnt;
    }
};
