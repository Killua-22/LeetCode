class Solution {
public:
    int dp[1001][1001];

    int helper(int idx, int t_idx, string& s, string& t) {
        if(t_idx >= t.size())
            return 1;
        if(idx >= s.size())
            return 0;

        if(dp[idx][t_idx] != -1)
            return dp[idx][t_idx];
        
        int res1 = helper(idx+1, t_idx, s, t);
        if(s[idx] == t[t_idx])
            res1 += helper(idx+1, t_idx+1, s, t);
        
        return dp[idx][t_idx] = res1;
    }

    int numDistinct(string s, string t) {
        memset(dp, -1, sizeof(dp));
        return helper(0, 0, s, t);
    }
};