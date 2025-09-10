class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        if (board.empty() || board[0].empty()) {
            return false;
        }

        for (int i = 0; i < board.size(); ++i) {
            for (int j = 0; j < board[0].size(); ++j) {
                if (board[i][j] == word[0] && dfs(board, word, i, j, 0)) {
                    return true;
                }
            }
        }
        return false;
    }

private:
    bool dfs(vector<vector<char>>& board, const string& word, int i, int j, int k) {
        // Base case: If k equals the length of the word, we found it.
        if (k == word.length()) {
            return true;
        }
        
        // Boundary and character mismatch checks.
        if (i < 0 || i >= board.size() || j < 0 || j >= board[0].size() || board[i][j] != word[k]) {
            return false;
        }

        // Mark the cell as visited by temporarily changing its value.
        char temp = board[i][j];
        board[i][j] = '#';

        // Explore all 4 possible directions.
        bool found = dfs(board, word, i + 1, j, k + 1) || 
                     dfs(board, word, i - 1, j, k + 1) ||
                     dfs(board, word, i, j + 1, k + 1) || 
                     dfs(board, word, i, j - 1, k + 1);

        // Backtrack: Restore the cell's original character.
        board[i][j] = temp;
        
        return found;
    }
};