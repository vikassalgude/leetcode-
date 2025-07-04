class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
       
        vector<int> trustScore(n + 1, 0);
        for (auto& t : trust) {
            trustScore[t[0]]--; // trusts someone
            trustScore[t[1]]++; // is trusted
        }
        for (int i = 1; i <= n; ++i) {
            if (trustScore[i] == n - 1)
                return i;
        }
        return -1;
    }
};
