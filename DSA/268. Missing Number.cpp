class Solution {
public:
    int missingNumber(vector<int>& nums) {
         vector<bool> a(nums.size() + 1, false); // Add extra space for index = nums.size() + 1
        
        for(int i = 0; i < nums.size(); i++) {
            int b = nums[i];
            if (b >= 0 && b <= nums.size() + 1) {
                a[b] = true;
            }
        }
        int k=-1;
        for(int i = 0; i < a.size(); i++) {
            if (!a[i]) {
                //return i;
                k=i;break;
            }
        }
        return k;//a.size(); //edge case
    }
};
