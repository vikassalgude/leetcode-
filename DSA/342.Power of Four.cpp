class Solution {
public:
    bool isPowerOfFour(int n) {
        // if(n<=0)return false;
        // while(n%4==0){
        //     n/=4;
        // }
        // return n==1;
        if(n==1)return 1;
        if(n<=0)return 0;
        if(n%4!=0)return 0;
        return isPowerOfFour(n/4);
    }
};
