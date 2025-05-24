class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        // vector<int>a;
        // for(int i=0;i<words.size();i++){
        //     string s=words[i];
        //     for(int j=0;j<s.size();j++){
        //         if(s[j]==x){a.push_back(i);break;}

        //     }
            
        // }
        // return a;
        vector<int> res;
        int n = words.size();
        for (int i = 0; i < n; ++i) {
            if (words[i].find(x) != string::npos) {
                res.push_back(i);
            }
        }
        return res;
    }
};
