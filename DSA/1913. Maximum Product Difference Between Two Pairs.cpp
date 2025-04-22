class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int a=INT_MIN;
        int b=INT_MAX;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        a=nums[0]*nums[1];
        b=nums[n-1]*nums[n-2];
        return b-a;
    }
};
