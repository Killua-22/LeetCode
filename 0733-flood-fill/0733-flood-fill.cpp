class Solution {
public:
    
    bool isValid(vector<vector<int>> &image, int m, int n, int x, int y, int oldColor, int newColor) {
        if (x < 0 || x >= m || y < 0 || y >= n
            || image[x][y] != oldColor || image[x][y] == newColor)
            return false;
        return true;
    }
    
    void bfs(vector<vector<int>>& image, int sr, int sc,int oldcolor, int color) {
        
        int m = image.size();
        int n = image[0].size();
        
        queue<pair<int, int>> q;
        
        q.push(pair<int, int>(sr, sc));
        
        image[sr][sc] = color;
        while(!q.empty()) {
            auto temp = q.front();
            q.pop();
            
            int posx = temp.first;
            int posy = temp.second;
            
            if(isValid(image, m, n, posx+1, posy, oldcolor, color)) {
                image[posx+1][posy] = color;
                q.push(pair<int, int>(posx+1, posy));
            }
            if(isValid(image, m, n, posx, posy+1, oldcolor, color)) {
                image[posx][posy+1] = color;
                q.push(pair<int, int>(posx, posy+1));
            }
            if(isValid(image, m, n, posx-1, posy, oldcolor, color)) {
                image[posx-1][posy] = color;
                q.push(pair<int, int>(posx-1, posy));
            }
            if(isValid(image, m, n, posx, posy-1, oldcolor, color)) {
                image[posx][posy-1] = color;
                q.push(pair<int, int>(posx, posy-1));
            }
        }
        
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        // vector<vector<bool>>& tochange(image.size(), vector<bool>(image[0].size(), false));
        int oldcolor = image[sr][sc];
        bfs(image, sr, sc,oldcolor, color); 
        
        
        
        return image;
    }
};