class Solution {
public:
    int findLucky(vector<int>& arr) {
        map<int,int>m;
        
        vector<int> freq(501, 0);
        for(int num : arr) {
            freq[num]++;
        }
        for(int i = 500; i >= 1; --i) {
            if(freq[i] == i) {
                return i; // Return immediately when found
            }
        }
        return -1;
    }
};
