// 
class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int peri = 0;
        int n = grid.size();
        int m = grid[0].size();
        int x[] = {-1, 1, 0, 0};
        int y[] = {0, 0, -1, 1};
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 1) { // Only process land cells
                    for (int k = 0; k < 4; k++) {
                        int r = i + x[k];
                        int c = j + y[k];
                        // Check if neighbor is out of bounds or water
                        if (r ==-1|| r == n || c ==-1 || c >= m || grid[r][c] == 0) {
                            peri++;
                        }
                    }
                }
            }
        }
        return peri;
    }
};
