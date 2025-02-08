class Solution {
public:
    bool isPalindrome(string s) {
        string a="";
        for(int i=0;i<s.size();i++){
            if(isalnum(s[i])){
                a+=s[i];
            }
            else{
                //continue;
                //i++;
            }
        }
        if(a=="")return 1;
        transform(a.begin(), a.end(), a.begin(), ::tolower);
        int l=0;
        int r=a.size()-1;
        while(l<r){
            if(a[l]==a[r]){
                r--;
                l++;
            }
            else if(a[l]!=a[r]){
                return 0;
            }
        }
        return 1;
    }
};
