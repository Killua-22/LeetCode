class Solution {
public:
    bool canPartitionKSubsets(vector<int>& nums, int k) {
        // sort(nums.begin(), nums.end());
        
        int sum = accumulate(nums.begin(), nums.end(), 0);
        
        if(nums.size() < k || sum%k) return false;
        
        vector<bool> visited(nums.size(), false);
        
        return backtrack(nums, visited, sum/k, 0, 0, k);
        
    }
    
    bool backtrack(vector<int> &nums, vector<bool> &visited, int target, int currsum, int i, int k){
        
        if(i>=nums.size())
            return false;
        
        if(k==1)
            return true;
        
        if(currsum == target)
            return backtrack(nums, visited, target, 0, 0, k-1);
        
        for(int j=i; j<nums.size(); j++){
            if(visited[j] || currsum + nums[j] > target) continue;
            
            visited[j] = true;
            if(backtrack(nums, visited, target, currsum + nums[j], j+1, k)) return true;
            visited[j] = false;
            
            while(j+1 < nums.size() && nums[j] == nums[j+1]) j++;
        }
        
        return false;
    }
};