class Solution {
public:
    long long helper(int index, int n, vector<vector<int>> &rides, vector<long long> &dp)
    {
        if(index >= rides.size())
            return 0;
        if(dp[index] != -1) return dp[index];  
        int i=rides.size();
        int low = index+1; 
        int high = rides.size()-1;
        
        while(low <= high)
        {
            int mid = (low + high)/2;
            if(rides[mid][0] >= rides[index][1])
            {
                i = mid;
                high = mid-1;
            }else
            {
                low = mid+1;
            }
        }
        
        long long pick = rides[index][1] - rides[index][0] + rides[index][2] + helper(i, n, rides, dp);
        long long notpick = helper(index+1, n, rides, dp);
        return dp[index] = max(pick, notpick);
    }
    
    long long maxTaxiEarnings(int n, vector<vector<int>>& rides) {
        vector<long long> dp(rides.size()+1, -1);
        sort(rides.begin(), rides.end());
        return helper(0, n, rides, dp);
    }
};