public class Solution {
    public bool WordBreak(string s, IList<string> wordDict) {
        
        bool[] dp = new bool[s.Length+1];
        dp[s.Length] = true;

        for(int i=s.Length-1; i>=0; i--)
        {
            foreach(var word in wordDict)
            {
                if((i + word.Length <= s.Length) && (s[i..(i+word.Length)] == word))
                    dp[i] = dp[i + word.Length];
                if(dp[i] == true)
                    break;
            }
        }

        return dp[0];


    }
}