class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
    
        // for(int i=0;i<arr.size()-1;i++){
        //     int a=arr[i+1];
        //     for(int j=i+1;j<arr.size();j++){
        //         if(a<arr[j]){
        //             a=arr[j];
        //         }
        //     }
        //     arr[i]=a;
        // }
        // arr[arr.size()-1]=-1;
        // return arr;
        int n = arr.size();
        int maxRight = -1;

        for (int i = n - 1; i >= 0; i--) {
            int current = arr[i];
            arr[i] = maxRight;
            maxRight = max(maxRight, current);
        }

        return arr;
    }
};
