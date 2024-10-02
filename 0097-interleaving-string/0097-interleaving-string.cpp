class Solution {
public:

    vector<vector<vector<int>>> dp;

    bool helper(int i1, int i2, int i3, string s1, string s2, string s3) {
        
        if(i3 == s3.size()){
            return i1 == s1.size() && i2 == s2.size();
        }

        if(dp[i1][i2][i3] != -1) return dp[i1][i2][i3];

        bool res = false;

        if(i1<s1.size() && s1[i1] == s3[i3])
            res = helper(i1+1, i2, i3+1, s1, s2, s3);
        
        if(!res && i2<s2.size() && s2[i2] == s3[i3])
            res = helper(i1, i2+1, i3+1, s1, s2, s3);

        return dp[i1][i2][i3] = res;
    }

    bool isInterleave(string s1, string s2, string s3) {
        if (s1.size() + s2.size() != s3.size()) return false;

        dp.resize(s1.size() + 1, vector<vector<int>>(s2.size() + 1, vector<int>(s3.size() + 1, -1)));
        return helper(0, 0, 0, s1, s2, s3);
    }
};