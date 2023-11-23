class Solution {
public:
    
    void helper(int index, vector<int> &candidates, int target, vector<int> lst, vector<vector<int>> &res, int n){
        
        if(target == 0)
        {
            res.push_back(lst);
            return;
        }
        
        for(int i=index;i<n;i++)
        {
            if(i>index && candidates[i]==candidates[i-1]) continue;
            if(candidates[i]>target) break;
            lst.push_back(candidates[i]);
            helper(i+1,candidates,target-candidates[i],lst,res, n);
            lst.pop_back();


        }
    }
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> res;
        int n = candidates.size();
        vector<int> lst;
        
        helper(0, candidates, target, lst, res, n);
        
        return res;
    }
};