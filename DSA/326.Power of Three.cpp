class Solution {
public:
    bool isPowerOfThree(int n) {
    //  if(n<=0)return false;
    //     while(n%3==0){
    //         n/=3;
    //     }
    //     return n==1;
        if(n==1)return 1;
        if(n<=0)return 0;
        if(n%3!=0)return 0;
        return isPowerOfThree(n/3);   
    }
};
