class Solution {
public:

    int numDistinct(string s, string t) {
        int n = s.size();
        int m = t.size();

        vector<vector<unsigned long long>> dp(n+1, vector<unsigned long long>(m+1, 0));
        
        for(int i=0; i<=n; i++) {
            dp[i][0] = 1;
        }

        for(int i=1; i<=n; i++) {
            for(int j=1; j<=m; j++) {
                if(s[i-1] == t[j-1])
                    dp[i][j] = dp[i-1][j-1] + dp[i-1][j];
                else 
                    dp[i][j] = dp[i-1][j];
            }
        }

        return dp[n][m];
    }


    // void helper(int idx, int t_idx, string s, string t, int& count) {

    //     if(t_idx == t.size())
    //     {
    //         count++;
    //         return;
    //     }

    //     if(idx >= s.size())
    //         return;
        
    //     if(s[idx] == t[t_idx])
    //         helper(idx+1, t_idx+1, s, t, count);
        
    //     helper(idx+1, t_idx, s, t, count);
    // }

    // int numDistinct(string s, string t) {
    //     int count = 0;
        
    //     helper(0, 0, s, t, count);
    //     return count;
    // }
};