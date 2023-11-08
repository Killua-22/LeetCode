class Solution {
public:
    
    vector<int> dx = {0, 0, -1, 1};
    vector<int> dy = {1, -1, 0, 0};
    
    bool validIndex(int m, int n, int r, int c)
    {
        return r<m && r>=0 && c<n && c>=0; 
    }
    
    bool backtracking(vector<vector<char>> &board, vector<vector<bool>> &vis, string target, int m, int n, int i, int j, string s) {
        if(s == target)
            return true;
        if(s.length() > target.length())
            return false;
        if(!validIndex(m, n, i, j))
            return false;
        if(vis[i][j])
            return false;
        if(board[i][j] != target[s.length()])
            return false;
        
        vis[i][j] = true;
        
        bool can = false;
        
        for(int k=0; k<4; k++) {
            if(can)
                return true;
            // if(board[i][j] == target[s.length()])
            //     can = backtracking(board, vis, target, m, n, i + dx[k], j + dy[k], s + board[i][j]);
            can = backtracking(board, vis, target, m, n, i + dx[k], j + dy[k], s + board[i][j]);
        }
        
        vis[i][j] = false;
        return can;
            
    }
    
    bool exist(vector<vector<char>>& board, string word) {
        int rows = board.size();
        int cols = board[0].size();
        
        
        vector<vector<bool>> vis(rows, vector<bool>(cols));
        
        for(int r=0; r<rows; r++)
        {
            for(int c=0; c<cols; c++)
            {
                if (backtracking(board, vis, word, rows, cols, r, c, ""))
                    return true;
            }
        }
        
        return false;
    }
    
    
};