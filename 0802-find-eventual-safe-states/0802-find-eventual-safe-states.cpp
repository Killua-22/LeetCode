class Solution {
public:
    
    bool dfs(int idx, vector<int>& isSafe, vector<vector<int>>& graph) {
        if(isSafe[idx] != -1) return isSafe[idx];
        isSafe[idx] = 0;
        
        for(auto x: graph[idx]) {
            if(!dfs(x, isSafe, graph)) {
                isSafe[idx] = 0;
                return false;
            }
        }
        
        isSafe[idx] = 1;
        return true;
    }
    
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int> res;
        vector<int> isSafe(n, -1);
        
        for(int i=0; i<n; i++) {
            if(isSafe[i] == 1 || dfs(i, isSafe, graph)) {
                res.push_back(i);
            }
        }
        
        return res;
    }
};