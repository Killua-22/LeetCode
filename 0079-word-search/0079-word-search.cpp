class Solution {
public:
    
    bool search(vector<vector<char>> &board, int x, int y, int index, string word, int m, int n) {
        if(index == word.size())
            return true;
        
        if(x < 0 || y < 0 || x == m || y == n || board[x][y] != word[index] || board[x][y] == '#')
            return false;
        
        char c = board[x][y];
        board[x][y] = '#';
        
        bool top = search(board, x - 1, y, index+1, word, m, n);
        
        bool bottom = search(board, x + 1, y, index+1, word, m, n);
        
        bool left = search(board, x, y-1, index+1, word, m, n);
        
        bool right = search(board, x, y+1, index+1, word, m, n);
        
        board[x][y] = c;
        
        return top || bottom || left || right;
    }
    
    bool exist(vector<vector<char>>& board, string word) {
        
        int m = board.size(); 
        int n = board[0].size();
        
        int index = 0;
        
        for(int i=0; i<m; i++) {
            for(int j=0; j<n; j++) {
                if(word[index] == board[i][j]) {
                    if(search(board, i, j, index, word, m, n))
                        return true;
                }
                    
            }
        }
        
        return false;
        
    }
};