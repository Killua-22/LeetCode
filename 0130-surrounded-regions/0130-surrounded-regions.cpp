class Solution {
public:

    void bfs(int row, int col, int n, int m, vector<vector<char>>& board, vector<vector<bool>>& vis) {

        
        queue<pair<int, int>> q;
        q.push({row, col});

        while(!q.empty()) {
            int r = q.front().first;
            int c = q.front().second;
            q.pop();

            for(int i=-1; i<=1; i++) {
                for(int j=-1; j<=1; j++) {
                    if(i!=0 && j!=0) 
                        continue;
                    int nr = r + i;
                    int nc = c + j;

                    if(nr<0 || nr>=n || nc<0 || nc>=m || vis[nr][nc] || board[nr][nc] == 'X')
                        continue;
                    vis[nr][nc] = true;
                    q.push({nr, nc});
                    
                }
            }
        }
    }

    void solve(vector<vector<char>>& board) {
        int n = board.size();
        int m = board[0].size();

        vector<vector<bool>> vis(n, vector<bool>(m, false));

        for(int i=0; i<n; i++) {
            if(board[i][0] == 'O')
                bfs(i, 0, n, m, board, vis);
            if(board[i][m-1] == 'O')
                bfs(i, m-1, n, m, board, vis);
        }
 
        for(int i=0; i<m; i++) {
            if(board[0][i] == 'O')
                bfs(0, i, n, m, board, vis);
            if(board[n-1][i] == 'O')
                bfs(n-1, i, n, m, board, vis);
        }


        for(int i=1; i<n-1; i++) {
            for(int j=1; j<m-1; j++) {
                if(board[i][j] == 'O' && !vis[i][j]) {
                    board[i][j] = 'X';
                }
            }
        }

    }
};