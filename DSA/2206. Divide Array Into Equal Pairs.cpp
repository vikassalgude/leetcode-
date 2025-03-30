class Solution {
public:
    bool divideArray(vector<int>& nums) {
        std::map<int, int> countMap;

    // Count occurrences of each number
    for (int i = 0; i < nums.size(); i++) {
        countMap[nums[i]]++;
    }

    // Check if each count is even
    for (const auto& pair : countMap) {
        if (pair.second % 2 != 0) {
            return false; // Found an odd count
        }
    }
    
    return true; // All counts are even
    }
};
