class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        
        res.push_back({1});
        
        for(int i=1; i<numRows; i++) {
            vector<int> prev = res[i-1];
            vector<int> curr;
            
            curr.push_back(1);
            
            for(int j=1; j<i; j++) {
                curr.push_back(prev[j-1] + prev[j]);
            }
            
            curr.push_back(1);
            
            res.push_back(curr);
            
        }
        
        return res;
    }
};