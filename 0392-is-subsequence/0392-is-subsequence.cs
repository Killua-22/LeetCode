public class Solution {
    public bool IsSubsequence(string s, string t) {
        
        int i=0;
        int j = 0;

        while(j<s.Length && i<t.Length)
        {
            if(s[j] == t[i])
            {
                j++;
                i++;
            }
            else
                i++;
                
        }
        if(i==t.Length && j!=s.Length) return false;
        return true;

    }
}