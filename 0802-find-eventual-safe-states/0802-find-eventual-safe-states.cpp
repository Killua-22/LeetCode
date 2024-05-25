class Solution {
public:
    
    bool dfs(int idx, vector<int>& ds, vector<vector<int>>& graph) {
        if(ds[idx] != -1) return ds[idx];
        ds[idx] = 0;
        
        for(auto x: graph[idx]) {
            if(!dfs(x, ds, graph)) {
                ds[x] = 0;
                return false;
            }
        }
        
        ds[idx] = 1;
        return true;
    }
    
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        vector<int> res;
        vector<int> ds(graph.size(), -1);
        
        for(int i=0; i<graph.size(); i++) {
            if(ds[i] == 1 || dfs(i, ds, graph)) {
                res.push_back(i);
            }   
        }
        
        return res;
        
    }
};