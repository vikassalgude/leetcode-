// class Solution {
// public:
//     // #def long long ll;
//     long long x=INT_MAX;
//     vector<int>res;
//     void check(vector<int>&temp){
        
//         long long mini=*max_element(temp.begin(),temp.end())-*min_element(temp.begin(),temp.end());
//         if(mini<x){
//             x=mini;
//             res=temp;
//         }
//     }
//     void solve(int i,int k,int n,vector<int>temp,vector<int>fact){
//         if(k==0){
//             if(n==1)
//             check(temp);
//             return;
//         }
//         if(n==0||n==1)return;
//         for(int j=i;j<fact.size();j++){
//             if(n%fact[j]==0){
//                 temp.push_back(fact[j]);
//                 solve(j,k-1,n/fact[j],temp,fact);
//                 temp.pop_back();
//             }
//         }

//     }
//     vector<int> minDifference(int n, int k) {
//         vector<int>temp,fact;
//         // for(int i=1;i*i<=n;i++){
//         //     if(n%i==0){
//         //         fact.push_back(i);
//         //         fact.push_back(n/i);
//         //     }
//         // }
//         for (int i = 1; i * i <= n; i++) {
//             if (n % i == 0) {
//                 fact.push_back(i);
//                 if (i != n / i) fact.push_back(n / i);
//             }
//         }
//         solve(0,k,n,temp,fact);
//         return res;
//     }
// };
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long x = LLONG_MAX;
    vector<int> res;

    void check(const vector<int>& temp) {
        if (temp.empty()) return;
        long long mini = *max_element(temp.begin(), temp.end()) -
                         *min_element(temp.begin(), temp.end());
        if (mini < x) {
            x = mini;
            res = temp;
        }
    }

    void solve(int i, int k, int n, vector<int> temp, const vector<int>& fact) {
        if (k == 0) {
            if (n == 1) check(temp);
            return;
        }
        if (n <= 1) return;

        for (int j = i; j < fact.size(); j++) { // ✅ start from i
            if (n % fact[j] == 0) {
                temp.push_back(fact[j]);
                solve(j, k - 1, n / fact[j], temp, fact);
                temp.pop_back();
            }
        }
    }

    vector<int> minDifference(int n, int k) {
        vector<int> temp, fact;
        for (int i = 1; i * i <= n; i++) {
            if (n % i == 0) {
                fact.push_back(i);
                if (i != n / i) fact.push_back(n / i);
            }
        }
        sort(fact.begin(), fact.end());
        fact.erase(unique(fact.begin(), fact.end()), fact.end());

        solve(0, k, n, temp, fact);
        return res;
    }
};
