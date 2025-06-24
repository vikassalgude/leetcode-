class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        vector<int>a;
        vector<int>b(nums.size(),0);
        // for(int i=0;i<nums.size();i++){
        //     for(int j=0;j<nums.size();j++){
        //        if(abs(i-j)<=k&&nums[j]==key&&!b[i]){
        //         a.push_back(i);
        //         b[i]=1;
        //        }
        //     }
        // }
        // return a;
    vector<int> result;
    int n = nums.size();
    vector<bool> added(n, false); // To avoid duplicates

    for (int i = 0; i < n; ++i) {
        if (nums[i] == key) {
            int start = max(0, i - k);
            int end = min(n - 1, i + k);
            for (int j = start; j <= end; ++j) {
                if (!added[j]) {
                    result.push_back(j);
                    added[j] = true;
                }
            }
        }
    }
    //sort(result.begin(), result.end()); // Optional, for sorted output
    return result;
    }
};
