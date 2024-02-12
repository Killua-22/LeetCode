class Solution {
public:
    
    void helper(int index, int target, vector<int>& candidates, vector<int>& lst, vector<vector<int>>& res) {
        
        if(target == 0) {
            res.push_back(lst);
            return;
        }
        
        if(index == candidates.size())
            return;
        
        if(target < 0)
            return;
        
        //not pick
        helper(index+1, target, candidates, lst, res);
        
        //pick
        lst.push_back(candidates[index]);
        helper(index, target-candidates[index], candidates, lst, res);
        lst.pop_back();
        
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        
        vector<int> lst;
        
        helper(0, target, candidates, lst, res);
        
        return res;
    }
};