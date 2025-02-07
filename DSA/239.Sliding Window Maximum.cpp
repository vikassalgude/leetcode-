class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        // vector<int>a;
        // for(int i=0;i<=nums.size()-k;i++){
        //     int m=INT_MIN;
        //     for(int j=i;j<i+k;j++){
        //         m=max(m,nums[j]);
        //     }
        //     a.push_back(m);
        // }
        // return a;

        //OPTIMIZE APPROACH
        deque<int>d;
        vector<int>ans;
        for(int i=0;i<k-1;i++){
            if(d.empty()){
                d.push_back(i);
            }
            else{
                while(!d.empty()&&nums[i]>nums[d.back()]){
                    d.pop_back();
                }
                d.push_back(i);
            }
        }
        for(int i=k-1;i<nums.size();i++){
            while(!d.empty()&&nums[i]>nums[d.back()]){
                d.pop_back();
            }
            d.push_back(i);
            if(d.front()<=i-k){
                d.pop_front();
            }
            ans.push_back(nums[d.front()]);

        }
        return ans;
    }
};
