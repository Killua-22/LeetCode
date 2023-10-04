public class Solution {
    
    public bool check(string s, int i, int j)
    {
        while(i<j)
        {
            if(s[i]!=s[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
    
    public string LongestPalindrome(string s) {
        int n = s.Length;
        // if(n==1) 
        //     return s;
        // if(n==2)
        // {
        //     if(s[0] == s[1])
        //         return s;
        //     else 
        //         return s[0].ToString();
        // }
            
        int maxlength = 0;
        int index = 0;
        for(int i=0; i<n; i++)
        {
            for(int j=i; j<n; j++)
            {
                if(check(s, i, j))
                {
                    if(j-i+1 > maxlength)
                    {
                        maxlength = j-i+1;
                        index = i;
                    }
                        
                }
            }
        }
        
        // return s.Substring(index, maxlength).Length == 0 ? s[0].ToString() : s.Substring(index, maxlength);
        return s.Substring(index, maxlength);
        
    }
}