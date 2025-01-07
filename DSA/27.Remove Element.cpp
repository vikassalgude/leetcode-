class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
      int k = 0; // Count of elements not equal to val

    // Iterate through the vector
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != val) {
            nums[k] = nums[i]; // Move non-val elements to the front
            k++; // Increment the count
        }
    }

    // Resize the vector to contain only the valid elements
    nums.resize(k);
    
    return k;
    }
};
