class Solution {
public:
    int maxSumDistinctTriplet(vector<int>& x, vector<int>& y) {
          int n = x.size();
          int s = -1;
    // for(int i = 0; i < n; ++i) {
    //     for(int j = i+1; j < n; ++j) {
    //         for(int k = j+1; k < n; ++k) {
    //             if(x[i] != x[j] && x[j] != x[k] && x[k] != x[i]) {
    //                 s = max(s, y[i] + y[j] + y[k]);
    //             }
    //         }
    //     }
    // }
    // return s;
        map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[x[i]]=max(mp[x[i]],y[i]);
        }
        vector<int>a;
        for(auto&p:mp){
           a.push_back(p.second);
        }
        if(a.size()<3)return -1;
        sort(a.begin(),a.end(),greater<int>());
        return a[0]+a[1]+a[2];
        
    }
    
};
