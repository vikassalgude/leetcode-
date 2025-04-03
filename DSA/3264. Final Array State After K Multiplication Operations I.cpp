class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
         priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minHeap;
    
    // Push all elements into the min-heap with their indices
    for (int i = 0; i < nums.size(); ++i) {
        minHeap.push({nums[i], i});
    }
    
    // Perform k multiplication operations
    while (k--) {
        // Extract the smallest element
        auto curr = minHeap.top();
        minHeap.pop();
        
        // Update its value in nums and push back into heap
        curr.first *= multiplier;
        nums[curr.second] = curr.first;
        minHeap.push(curr);
    }
    
    return nums;
        
        // while(k--){
        //     int s=INT_MAX;
        //     int k;
        //     for(int i=0;i<nums.size();i++){
        //        if(nums[i]<s){
        //         s=nums[i];
        //         k=i;
        //        }
        //     }
        //     nums[k]=s*multiplier;
        // }
        // return nums;

    }
};
