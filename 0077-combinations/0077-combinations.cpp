class Solution {
public:
    
    void helper(int i, int n, int k, vector<int>& lst, vector<vector<int>>& res) {
 
        if(lst.size() == k) {
            res.push_back(lst);
            return;
        }
        
        if(i > n) {
            return;
        }
        
        lst.push_back(i);
        
        helper(i+1, n, k, lst, res);
        
        lst.pop_back();
        
        helper(i+1, n, k, lst, res);
        
        
    }
    
    vector<vector<int>> combine(int n, int k) {
        
        vector<vector<int>> res;
        
        vector<int> lst;
        
        helper(1, n, k, lst, res);
        
        return res;
        
    }
};