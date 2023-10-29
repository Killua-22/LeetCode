class Solution {
public:
    
    void dfs(int node, vector<vector<int>> rooms, bool vis[])
    {
        if(vis[node]) return;
        vis[node] = true;
        for(auto it: rooms[node])
        {
            
            dfs(it, rooms, vis);
        }
    }
    
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        bool vis[n];
        
        for(int i=0; i<n; i++)
        {
            vis[i] = false;
        }
        
        dfs(0, rooms, vis);
        
        for(int i=0; i<n; i++){
            if(vis[i] == false)
                return false;
        }
        return true;
    }
};