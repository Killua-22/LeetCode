class Solution {
public:
    
    void dfs(int node, vector<vector<int>> rooms, vector<bool> &vis)
    {
        if(vis[node]) return;
        vis[node] = true;
        for(int i=0; i<rooms[node].size(); i++)
        {
            if(!vis[rooms[node][i]])
                dfs(rooms[node][i], rooms, vis);
        }
    }
    
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        vector<bool> vis(n, false);
        
        dfs(0, rooms, vis);
        
        for(int i=0; i<n; i++){
            if(vis[i] == false)
                return false;
        }
        return true;
    }
};