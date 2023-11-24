class Solution {
public:
    
    void backtrack(int k,int n,int start,vector<vector<int>>& ans,vector<int>& comb){
        
        if(k==0 && n==0){
            ans.push_back(comb);
            return;
        }
        
        for(int i=start; i<=9; i++)
        {
            comb.push_back(i);
            backtrack(k-1, n-i, i+1, ans, comb);
            comb.pop_back();
        }
    }
    
    vector<vector<int>> combinationSum3(int k, int n) {
        
        vector<vector<int>> res;
        vector<int> lst;
        
        backtrack(k, n, 1, res, lst);
        
        return res;
    }
};