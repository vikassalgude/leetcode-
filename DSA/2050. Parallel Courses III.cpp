class Solution {
public:
    int minimumTime(int n, vector<vector<int>>& relations, vector<int>& time) {
        vector<vector<int>> adj(n);
        vector<int> indeg(n, 0);

        // Build the graph
        for (auto& rel : relations) {
            adj[rel[0] - 1].push_back(rel[1] - 1);
            indeg[rel[1] - 1]++;
        }

        queue<int> q;
        vector<int> CourseTime(n, 0);

        // Start with courses having no prerequisites
        for (int i = 0; i < n; i++) {
            if (indeg[i] == 0) {
                q.push(i);
                CourseTime[i] = time[i];
            }
        }

        while (!q.empty()) {
            int node = q.front();
            q.pop();
            for (int next : adj[node]) {
                // Update the time to finish course 'next'
                CourseTime[next] = max(CourseTime[next], CourseTime[node] + time[next]);
                indeg[next]--;
                if (indeg[next] == 0) {
                    q.push(next);
                }
            }
        }

        // The answer is the maximum time among all courses
        return *max_element(CourseTime.begin(), CourseTime.end());
    }
};
