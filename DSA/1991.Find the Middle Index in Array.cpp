class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
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
        for(int i=0;i<nums.size();i++){
            if(left[i]==right[i]){
                return i;
            }
        }
        return -1;
    }
};
