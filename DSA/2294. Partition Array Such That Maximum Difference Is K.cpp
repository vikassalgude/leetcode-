class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int a=nums[0];int b=0,c=0;
        for(int i=1;i<nums.size();i++){
            
            b=nums[i];
            if(b-a<=k)continue;
            else{
                c++;
                a=nums[i];
            }
        }
        return c+1;
    }
};
