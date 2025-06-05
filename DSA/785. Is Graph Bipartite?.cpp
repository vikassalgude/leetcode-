class Solution {
public:
    bool dfs(int node,vector<int>&color,vector<vector<int>>& graph){
        for(auto it:graph[node]){
            if(color[it]==-1){
                color[it]=(color[node]+1)%2;
                if (!dfs(it, color, graph))
                    return false;
            }
            else{
                if(color[node]==color[it]){
                    return 0;
                }
            }
        }
        return 1;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int> color(n, -1);
        for (int i = 0; i < n; i++) {
            if (color[i] == -1) {
                if (!dfs(i, color, graph))
                    return false;
            }
        }
        return true;
    }
};
