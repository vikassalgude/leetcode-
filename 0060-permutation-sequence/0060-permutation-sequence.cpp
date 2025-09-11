class Solution {
public:
//     void solve(int i,vector<string>&temp,string s){
//         if(i==s.size()){
//             temp.push_back(s);
//             return;
//         }
//         for(int j=i;j<s.size();j++){
//             swap(s[i],s[j]);
//             solve(i+1,temp,s);
//             swap(s[i],s[j]);
//         }
//     }
    
    string getPermutation(int n, int k) {
        // string s="";
        // for(int i=1;i<=n;i++){
        //    s+=(i+'0');
        // }
        // vector<string>temp;
        // int i=0;
        // solve(i,temp,s);
        // sort(temp.begin(), temp.end());
        // return temp[k-1];
                int fact = 1; 
        vector<int> numbers; 
        for(int i = 1;i<n;i++) {
            fact = fact * i; 
            numbers.push_back(i); 
        }
        numbers.push_back(n); 
        string ans = ""; 
        k = k - 1; 
        while(true) {
            ans = ans + to_string(numbers[k / fact]); 
            numbers.erase(numbers.begin() + k / fact); 
            if(numbers.size() == 0) {
                break; 
            }
            
            k = k % fact; 
            fact = fact / numbers.size();
        }
        return ans;
    }
};
