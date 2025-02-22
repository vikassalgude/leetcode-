class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int>left(nums.size());
        vector<int>right(nums.size());
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            left[i]=sum;
        }
        sum=0;
        for(int i=nums.size()-1;i>=0;i--){
            sum+=nums[i];
           right[i]=sum;
        }
        vector<int>ans(nums.size());
        for(int i=0;i<nums.size();i++){
            nums[i]=abs(left[i]-right[i]);
            }
        
        return nums; 
    }
};
