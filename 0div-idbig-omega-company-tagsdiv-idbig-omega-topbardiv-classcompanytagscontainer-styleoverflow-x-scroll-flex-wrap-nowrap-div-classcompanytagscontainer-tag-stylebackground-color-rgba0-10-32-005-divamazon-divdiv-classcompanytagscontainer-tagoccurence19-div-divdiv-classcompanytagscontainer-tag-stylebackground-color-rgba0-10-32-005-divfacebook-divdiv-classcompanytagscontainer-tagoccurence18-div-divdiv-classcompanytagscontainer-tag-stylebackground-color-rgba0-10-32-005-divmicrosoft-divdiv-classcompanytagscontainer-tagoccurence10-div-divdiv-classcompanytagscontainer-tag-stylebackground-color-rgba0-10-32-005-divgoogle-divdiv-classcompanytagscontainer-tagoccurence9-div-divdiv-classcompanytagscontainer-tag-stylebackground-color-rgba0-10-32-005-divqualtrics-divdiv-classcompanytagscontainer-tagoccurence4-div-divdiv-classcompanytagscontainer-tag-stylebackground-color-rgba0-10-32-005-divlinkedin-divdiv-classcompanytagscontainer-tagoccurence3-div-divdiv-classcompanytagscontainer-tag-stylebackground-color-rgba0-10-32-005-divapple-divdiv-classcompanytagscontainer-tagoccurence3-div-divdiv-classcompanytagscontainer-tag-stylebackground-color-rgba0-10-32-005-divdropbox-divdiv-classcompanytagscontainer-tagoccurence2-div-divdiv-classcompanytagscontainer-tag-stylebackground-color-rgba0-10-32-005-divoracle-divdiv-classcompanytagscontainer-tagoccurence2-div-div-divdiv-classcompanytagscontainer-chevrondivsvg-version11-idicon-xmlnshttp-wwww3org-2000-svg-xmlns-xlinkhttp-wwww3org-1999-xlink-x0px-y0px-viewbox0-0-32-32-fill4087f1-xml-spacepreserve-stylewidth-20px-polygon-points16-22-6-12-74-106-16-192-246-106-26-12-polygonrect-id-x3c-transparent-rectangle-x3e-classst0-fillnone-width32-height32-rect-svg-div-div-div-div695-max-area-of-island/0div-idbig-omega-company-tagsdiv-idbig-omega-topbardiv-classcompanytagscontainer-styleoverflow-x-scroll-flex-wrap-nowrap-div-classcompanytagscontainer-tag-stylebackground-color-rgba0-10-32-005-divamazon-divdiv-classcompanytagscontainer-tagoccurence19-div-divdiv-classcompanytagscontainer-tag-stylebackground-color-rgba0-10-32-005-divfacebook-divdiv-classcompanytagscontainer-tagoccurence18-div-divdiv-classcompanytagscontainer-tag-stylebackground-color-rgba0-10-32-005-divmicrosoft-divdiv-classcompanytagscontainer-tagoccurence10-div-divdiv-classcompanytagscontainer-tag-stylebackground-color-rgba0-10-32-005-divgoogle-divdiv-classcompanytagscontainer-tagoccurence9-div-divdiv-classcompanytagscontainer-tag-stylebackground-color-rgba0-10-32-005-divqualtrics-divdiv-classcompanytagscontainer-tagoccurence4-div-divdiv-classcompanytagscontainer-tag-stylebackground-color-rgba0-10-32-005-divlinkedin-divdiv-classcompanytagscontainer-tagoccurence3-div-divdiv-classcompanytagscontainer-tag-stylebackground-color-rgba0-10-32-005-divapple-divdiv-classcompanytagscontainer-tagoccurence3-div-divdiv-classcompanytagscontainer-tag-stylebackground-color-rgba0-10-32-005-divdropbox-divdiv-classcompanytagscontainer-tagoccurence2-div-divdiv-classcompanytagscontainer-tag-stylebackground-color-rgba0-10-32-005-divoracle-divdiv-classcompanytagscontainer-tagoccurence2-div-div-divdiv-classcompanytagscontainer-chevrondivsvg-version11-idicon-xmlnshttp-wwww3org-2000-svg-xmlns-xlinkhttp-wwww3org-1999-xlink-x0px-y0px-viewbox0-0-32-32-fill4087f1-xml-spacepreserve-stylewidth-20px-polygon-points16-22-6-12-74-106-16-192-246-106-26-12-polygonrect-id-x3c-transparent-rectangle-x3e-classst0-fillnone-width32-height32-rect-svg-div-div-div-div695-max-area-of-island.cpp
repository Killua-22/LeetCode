class Solution {
public:
    
    int bfs(int row, int col, vector<vector<int>> &grid, vector<vector<bool>> &vis, int n, int m)
    {
        vis[row][col] = true;
        int count = 0;
        queue<pair<int, int>> q;
        q.push({row, col});
        
        while(!q.empty()){
            int r = q.front().first;
            int c = q.front().second;
            q.pop();
            count++;
            for(int delrow = -1; delrow<=1; delrow++)
            {
                for(int delcol = -1; delcol <= 1; delcol++)
                {
                    if(delrow!=0 && delcol!=0)
                        continue;
                    
                    int nrow = r + delrow;
                    int ncol = c + delcol;
                    
                    if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && vis[nrow][ncol] == false && grid[nrow][ncol] == 1){
                        // count++;
                        vis[nrow][ncol] = true;
                        q.push({nrow, ncol});
                    }
                }
            }
        }
        
        return count;
        
    }
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        
        int n = grid.size();
        int m = grid[0].size();
        
        vector<vector<bool>> vis(n, vector<bool>(m, false));
        int res = 0;
        
        for(int row=0; row<n; row++)
        {
            for(int col=0; col<m; col++)
            {
                if(grid[row][col] == 1 && vis[row][col] == false){
                    int area = bfs(row, col, grid, vis, n, m);
                    
                    res = max(res, area);
                }
            }
        }
        
        return res;
    }
};