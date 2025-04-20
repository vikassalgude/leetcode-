class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        //int x=0;
        // for(int i=0;i<nums.size();i++){
        //     for(int j=i+1;j<nums.size();j++){
        //         if(nums[i]==nums[j]&&i<j){
        //             x++;
        //         }
        //     }
        // }
        //return x;
        int arr[102];
        for(int x:nums){
            arr[x]++;
        }
        int ans=0;
        for(int i:arr){
            ans+=((i)*(i-1)/2);
        }
        return ans;
    }
};
