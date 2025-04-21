class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool a=1;
        bool b=1;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1]){
                a=0;
            }
            if(nums[i]<nums[i+1]){
                b=0;
            }
            if(!a&&!b)return 0;
        }
        return a||b;
    }
};
