class Solution {
public:
    
    void helper(int index, int target, vector<int>& candidates, vector<int>& lst, vector<vector<int>>& res) {
        
        if(target == 0) {
            res.push_back(lst);
            return;
        }
        
        for(int i=index; i<candidates.size(); i++) {
            
            if(i>index && candidates[i] == candidates[i-1]) continue;

            if(target < candidates[i])
                break;
            
            lst.push_back(candidates[i]);
            
            helper(i+1, target - candidates[i], candidates, lst, res);
            
            lst.pop_back();
            
        }
        
    }
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        sort(candidates.begin(), candidates.end());
        
        vector<int> lst;
        
        helper(0, target, candidates, lst, res);
        
        return res;
    }
};