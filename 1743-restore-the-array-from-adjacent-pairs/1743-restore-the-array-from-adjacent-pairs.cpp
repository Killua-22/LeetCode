class Solution {
public:
    
    map<int, vector<int>> freq;
    
    void dfs(int root, vector<int>& ans, int prev) {
        ans.push_back(root);
        
        for(int i: freq[root]) {
            if(i == prev) continue;
            dfs(i, ans, root);
        }
    }
    
    vector<int> restoreArray(vector<vector<int>>& adjacentPairs) {
        
        vector<int> res;
        int n = adjacentPairs.size();
        
        
        
        for(int i=0; i<n; i++) {
            int x = adjacentPairs[i][0];
            int y = adjacentPairs[i][1];
            if(freq.count(x)) freq[x].push_back(y);
            else freq[x] = {y};
            
            if(freq.count(y)) freq[y].push_back(x);
            else freq[y] = {x};
            
        }
        
        int first;
        
        for(auto x: freq) {
            if(x.second.size() == 1){
                first = x.first;
                break;
            }
                
        }

        
        dfs(first, res, INT_MAX);
        
        return res;
    }
};