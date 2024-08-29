class Solution {
public:

    int bfs(int i, int j, int n, int m, vector<vector<bool>>& visited, vector<vector<int>>& grid) {
        queue<pair<int, int>> q;
        q.push({i, j});
        int area = 0;
        while(!q.empty()) {
            
            int r = q.front().first;
            int c = q.front().second;
            q.pop();
            
            
            for(int delr = -1; delr <= 1; delr++) {
                for(int delc = -1; delc <= 1; delc++) {
                    if(delr != 0 && delc != 0) {
                        continue;
                    }

                    int row = r + delr;
                    int col = c + delc;

                    if(row >= 0 && row < n && col >= 0 && col < m && !visited[row][col] && grid[row][col] == 1) {
                        visited[row][col] = true;
                        q.push({row, col});
                        area++;
                    }
                }
            }
        }

        return area;
    }

    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int res = 0;
        vector<vector<bool>> visited(n, vector<bool>(m, false));

        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(grid[i][j] == 1 && !visited[i][j]) {
                    int area = bfs(i, j, n, m, visited, grid);
                    res = max(res, area);
                }
            }
        }

        return res;
    }
};