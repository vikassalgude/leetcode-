class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        if (arr.size()<3)return 0;
        int i=0,j=1,k=2;
        while(k<arr.size()){
            if((arr[i]%2!=0)&&(arr[j]%2!=0)&&(arr[k]%2!=0))return 1;

            i++;j++;k++;
        }
        return 0;
    }
};
