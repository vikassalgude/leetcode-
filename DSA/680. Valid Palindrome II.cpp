class Solution {
public:
    bool help(string s,int i,int k){
       // if(k-i==0)return 0;
        while(i<k){
            
            if(s[i]!=s[k])return 0;
            
            i++;k--;
        }
        return 1; 
    }
    bool validPalindrome(string s) {
        int i=0;
        int k=s.size()-1;
        while(i<k){
            if(s[i]!=s[k]){
                if(help(s,i,k-1)||help(s,i+1,k)){
                    return 1;
                }
                else return 0;
            }
            i++;k--;
        }
        return 1;

    }
};
