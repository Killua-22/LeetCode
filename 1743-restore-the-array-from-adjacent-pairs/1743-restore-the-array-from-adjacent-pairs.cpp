class Solution {
public:
    unordered_map<int, vector<int>> freq;
    void dfs(int root, vector<int>& res, int prev) {
        
        res.push_back(root);
        
        for(int c: freq[root]) {
            if(c == prev) continue;
            dfs(c, res, root);
        }
        
    }
    
    vector<int> restoreArray(vector<vector<int>>& adjacentPairs) {
        
        vector<int> res;
        
        
        for(auto c: adjacentPairs) {
            
            int x = c[0];
            int y = c[1];
            
            if(freq.count(x)) freq[x].push_back(y);
            else freq[x] = {y};
            if(freq.count(y)) freq[y].push_back(x);
            else freq[y] = {x};
            
        }
        
        int root;
        
        for(auto x: freq) {
            if(x.second.size() == 1)
                root = x.first;
        }
        
        
        dfs(root, res, INT_MAX);
        
        return res;
    }
};