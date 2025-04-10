class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
         vector<bool> a(nums.size() + 1, false); // Add extra space for index = nums.size() + 1
        
        for(int i = 0; i < nums.size(); i++) {
            int b = nums[i];
            if (b > 0 && b <= nums.size() + 1) {
                a[b] = true;
            }
        }
        
        for(int i = 1; i < a.size(); i++) {
            if (!a[i]) {
                return i;
            }
        }
        return a.size(); 
    }
};
