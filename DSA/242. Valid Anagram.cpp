class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())return 0;
        vector<int>a(26,false);
        for(int i=0;i<s.size();i++){
            a[s[i]-'a']++;
        }
        for(int i=0;i<t.size();i++){
            a[t[i]-'a']--;
        }
        for(int i=0;i<a.size();i++){
            if(a[i]!=0)return 0;
        }
        return 1;

    }
};
