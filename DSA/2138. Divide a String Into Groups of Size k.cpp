class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        // int n=s.size();
        // int x=n%k;
        // if(x){
        //     int j=k-x;
        //     while(j--){
        //         s+=fill;
        //     }
        // }
        // vector<string>res;
        // int i=0;
        // while(i<n){
        //     int j=0;
        //     string a="";
            
        //     while(j<k){
        //     a+=s[i+j];
        //     j++;
        //     }
        //     res.push_back(a);i=i+k;
        // }
        // return res;
        int n = s.size();
        int remainder = n % k;
        if (remainder) {
            s.append(k - remainder, fill); // Pad with fill character
        }
        vector<string> res;
        for (int i = 0; i < s.size(); i += k) {
            res.push_back(s.substr(i, k));
        }
        return res;

    }
};
