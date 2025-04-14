class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>ans(nums.begin(),nums.end());
        int i=0;
        while(i<nums.size()){
            ans.push_back(nums[i]);i++;
        }
        return ans;

    }
};
