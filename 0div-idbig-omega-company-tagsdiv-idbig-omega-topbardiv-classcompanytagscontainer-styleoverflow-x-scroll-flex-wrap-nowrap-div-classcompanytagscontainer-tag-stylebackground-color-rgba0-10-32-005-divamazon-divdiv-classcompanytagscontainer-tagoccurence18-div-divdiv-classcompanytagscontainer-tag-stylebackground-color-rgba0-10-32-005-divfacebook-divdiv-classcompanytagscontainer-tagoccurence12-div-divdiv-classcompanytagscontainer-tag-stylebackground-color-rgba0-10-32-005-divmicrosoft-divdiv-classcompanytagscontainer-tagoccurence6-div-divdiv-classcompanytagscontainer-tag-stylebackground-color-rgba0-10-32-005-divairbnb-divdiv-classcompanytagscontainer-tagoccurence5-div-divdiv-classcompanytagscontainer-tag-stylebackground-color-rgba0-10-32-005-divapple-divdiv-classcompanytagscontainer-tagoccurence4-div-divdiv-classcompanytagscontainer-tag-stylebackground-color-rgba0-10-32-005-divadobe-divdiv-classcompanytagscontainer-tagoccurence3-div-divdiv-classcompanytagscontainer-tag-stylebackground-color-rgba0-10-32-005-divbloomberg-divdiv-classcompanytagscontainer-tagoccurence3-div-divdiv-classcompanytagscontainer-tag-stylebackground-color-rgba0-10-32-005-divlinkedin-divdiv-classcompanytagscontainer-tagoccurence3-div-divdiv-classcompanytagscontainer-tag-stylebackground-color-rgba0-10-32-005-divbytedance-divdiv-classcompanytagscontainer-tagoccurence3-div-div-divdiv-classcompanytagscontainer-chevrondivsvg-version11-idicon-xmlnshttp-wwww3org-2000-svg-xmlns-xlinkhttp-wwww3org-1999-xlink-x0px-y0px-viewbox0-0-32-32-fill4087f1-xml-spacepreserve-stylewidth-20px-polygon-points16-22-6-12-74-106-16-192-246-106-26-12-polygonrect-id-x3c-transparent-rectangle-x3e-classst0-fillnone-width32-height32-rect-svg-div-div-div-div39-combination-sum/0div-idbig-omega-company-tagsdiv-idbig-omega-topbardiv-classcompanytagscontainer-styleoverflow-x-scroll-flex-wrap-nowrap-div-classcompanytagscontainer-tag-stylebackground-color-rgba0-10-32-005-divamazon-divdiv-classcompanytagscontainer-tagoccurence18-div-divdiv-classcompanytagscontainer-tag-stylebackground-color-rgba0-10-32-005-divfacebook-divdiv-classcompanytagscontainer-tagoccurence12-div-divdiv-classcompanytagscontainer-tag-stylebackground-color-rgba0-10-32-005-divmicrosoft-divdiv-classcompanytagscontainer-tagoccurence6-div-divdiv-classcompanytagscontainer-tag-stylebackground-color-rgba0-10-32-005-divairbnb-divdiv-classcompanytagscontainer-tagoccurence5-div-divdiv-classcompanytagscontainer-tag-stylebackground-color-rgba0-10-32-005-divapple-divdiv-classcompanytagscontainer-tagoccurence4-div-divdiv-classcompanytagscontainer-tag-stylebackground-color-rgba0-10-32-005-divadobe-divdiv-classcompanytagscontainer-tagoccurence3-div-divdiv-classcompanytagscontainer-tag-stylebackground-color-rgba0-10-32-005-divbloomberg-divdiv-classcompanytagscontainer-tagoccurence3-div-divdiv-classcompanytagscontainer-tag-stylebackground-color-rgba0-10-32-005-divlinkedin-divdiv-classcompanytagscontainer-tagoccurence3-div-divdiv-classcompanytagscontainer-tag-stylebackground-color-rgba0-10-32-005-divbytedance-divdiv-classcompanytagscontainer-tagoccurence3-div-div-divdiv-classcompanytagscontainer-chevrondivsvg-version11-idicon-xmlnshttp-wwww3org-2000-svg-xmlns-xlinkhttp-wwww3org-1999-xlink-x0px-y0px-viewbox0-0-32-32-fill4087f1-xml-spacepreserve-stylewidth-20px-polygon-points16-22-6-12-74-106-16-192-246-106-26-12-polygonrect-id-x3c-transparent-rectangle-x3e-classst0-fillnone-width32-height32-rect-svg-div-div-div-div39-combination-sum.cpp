class Solution {
public:
    vector<vector<int>> ans;
    
    void helper(int i, vector<int> &candidates, int target, vector<int> &sol)
    {
        if(target ==0)
        {
            ans.push_back(sol);
            return ;
        }
        if(target < 0)
            return;
        if(i == candidates.size())
            return;
        
        helper(i+1, candidates, target, sol);
        
        sol.push_back(candidates[i]);
        helper(i, candidates, target - candidates[i], sol);
        sol.pop_back();
            
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> sol;
        
        helper(0, candidates, target, sol);
        
        return ans;
    }
};