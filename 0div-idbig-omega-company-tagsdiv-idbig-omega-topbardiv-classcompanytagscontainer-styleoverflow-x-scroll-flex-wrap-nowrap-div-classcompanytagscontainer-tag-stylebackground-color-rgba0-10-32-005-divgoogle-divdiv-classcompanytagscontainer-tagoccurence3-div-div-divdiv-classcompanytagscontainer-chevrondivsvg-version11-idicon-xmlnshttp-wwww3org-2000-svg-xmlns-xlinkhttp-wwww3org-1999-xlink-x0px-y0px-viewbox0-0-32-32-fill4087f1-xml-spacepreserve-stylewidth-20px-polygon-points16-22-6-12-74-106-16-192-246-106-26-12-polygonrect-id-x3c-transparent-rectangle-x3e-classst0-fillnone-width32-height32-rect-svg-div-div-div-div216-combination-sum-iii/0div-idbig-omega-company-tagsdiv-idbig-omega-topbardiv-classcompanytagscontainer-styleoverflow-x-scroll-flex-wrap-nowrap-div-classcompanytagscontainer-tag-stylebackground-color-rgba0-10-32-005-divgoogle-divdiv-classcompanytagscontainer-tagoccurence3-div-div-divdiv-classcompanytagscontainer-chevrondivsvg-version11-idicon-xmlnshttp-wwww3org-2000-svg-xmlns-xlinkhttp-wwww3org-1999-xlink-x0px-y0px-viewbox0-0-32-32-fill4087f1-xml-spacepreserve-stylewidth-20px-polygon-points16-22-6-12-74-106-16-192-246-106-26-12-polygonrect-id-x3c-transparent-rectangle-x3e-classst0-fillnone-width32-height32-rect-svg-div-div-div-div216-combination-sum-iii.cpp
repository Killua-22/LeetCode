class Solution {
public:
    
    void helper(int index, vector<int> candidates, vector<int> &lst, vector<vector<int>> &res, int target, int n, int k){
        
        if(target == 0 && lst.size() == k){
            res.push_back(lst);
            return;
        }
        
        if(index == n){   
            return;
        }
        
        if(target < 0){
            return;
        }
        
        if(target == 0)
        {
            return;
        }
        
        if(lst.size() == k && target != 0){
            return;
        }
        
        for(int i=index; i<n; i++)
        {
            lst.push_back(candidates[i]);
            helper(i+1, candidates, lst, res, target-candidates[i], n, k);
            lst.pop_back();
        }
        
    }
    
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> candidates;
        
        for(int i=1; i<=9; i++)
            candidates.push_back(i);
        
        vector<vector<int>> res;
        vector<int> lst;
        
        helper(0, candidates, lst, res, n, 9, k);
        
        return res;
    }
};