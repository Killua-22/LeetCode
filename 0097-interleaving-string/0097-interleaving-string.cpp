class Solution {
public:

    bool isInterleave(string s1, string s2, string s3) {
        int i1 = s1.size();
        int i2 = s2.size();
        int i3 = s3.size();
        if(i1 + i2 != i3)
            return false;

        vector<vector<bool>> dp(i1+1, vector<bool>(i2+1));

        dp[0][0] = true;

        for(int i=1; i<=i1; i++) {
            dp[i][0] = dp[i-1][0] && s1[i-1] == s3[i-1];
        }

        for(int j=1; j<=i2; j++) {
            dp[0][j] = dp[0][j-1] && s2[j-1] == s3[j-1];
        }

        for(int i=1; i<=i1; i++) {
            for(int j=1; j<=i2; j++) {
                dp[i][j] = (dp[i-1][j] and s1[i-1] == s3[i+j-1]) or (dp[i][j-1] and s2[j-1] == s3[i+j-1]);
            }
        }

        return dp[i1][i2];
    }
};