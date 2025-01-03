class Solution {
public:
    bool canPlaceFlowers(vector<int>& arr, int n) {
        // int i=0;
        // if(i==0&&(arr[i]==0)&&(arr[i+1]==0)){
        //             arr[i]=1;
        //             n=n-1;
        //         }
        // for(int i=1;i<arr.size();i++){
        //     if((arr[i]==0)&&(arr[i-1]==0)&&(arr[i+1]==0)){
        //         arr[i]=1;
        //         n=n-1;
        //     }
        //     if(n==0)break;
        // }
        // if(n==0||n<0)return 1;
        // //if(n!=0)return 0;
        // return 0;
        int size = arr.size();
    
        for (int i = 0; i < size; i++) {
        // Check if the current position is empty and the adjacent positions are also empty
        if (arr[i] == 0 && 
            (i == 0 || arr[i - 1] == 0) && 
            (i == size - 1 || arr[i + 1] == 0)) {
            // Plant a flower
            arr[i] = 1;
            n--; // Decrease the count of flowers to plant
            
            // Early exit if we have planted all required flowers
            if (n == 0) {
                return true;
            }
            }
         }
            return n<=0;
    }
};
