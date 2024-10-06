class Solution {
public:

    int minDistance(string word1, string word2) {
        int n = word1.size();
        int m = word2.size();

        vector<vector<int>> dp(n+1, vector<int>(m+1, 0));

        for(int i=0; i<=n; i++) {
            dp[i][0] = i;
        }

        for(int j=0; j<=m; j++) {
            dp[0][j] = j;
        }

        for(int i=1; i<=n; i++) {
            for(int j=1; j<=m; j++) {

                if(word1[i-1] == word2[j-1]) {
                    dp[i][j] = dp[i-1][j-1];
                } else {
                    dp[i][j] = 1+min({dp[i-1][j-1], dp[i-1][j], dp[i][j-1]});
                }
            }
        }

        return dp[n][m];
    }

    // int helper(int i, int j, string& word1, string& word2) {
    //     if(i == word1.size()) {
    //         return word2.size() - j;
    //     }

    //     if(j == word2.size()) {
    //         return word1.size() - i;
    //     }

    //     if(word1[i] != word2[j]) {
    //         int replace = helper(i+1, j+1, word1, word2);

    //         int del = helper(i+1, j, word1, word2);

    //         int ins = helper(i, j+1, word1, word2);

    //         return 1 + min({replace, del, ins});
    //     } else {
    //         return helper(i+1, j+1, word1, word2);
    //     }

    // }

    // int minDistance(string word1, string word2) {
    //     if(word1 == "") return word2.size();

    //     return helper(0, 0, word1, word2);
    // }
};