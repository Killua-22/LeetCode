class Solution {
public:
    
    void helper(int i, int k, int n, vector<int>& lst, vector<vector<int>>& res) {
        
        if(n == 0 && lst.size() == k) {
            res.push_back(lst);
            return;
        }
        
        if(lst.size() == k) 
        { 
            return;
        }
        
        if(n < 0)
            return;
        if(i > 9)
            return;
        
        lst.push_back(i);
        
        helper(i+1, k, n-i, lst, res);
        
        lst.pop_back();
        
        helper(i+1, k, n, lst, res);
    }
    
    vector<vector<int>> combinationSum3(int k, int n) {
        
        vector<vector<int>> res;
        
        vector<int> lst;
        
        helper(1, k, n, lst, res);
        
        return res;
        
    }
};