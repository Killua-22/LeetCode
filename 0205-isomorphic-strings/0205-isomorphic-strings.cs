public class Solution {
    public bool IsIsomorphic(string s, string t) {
        
        int n = s.Length;
        int m = t.Length;
        
        if(n != m)
            return false;
        
        Dictionary<char, char> hash = new Dictionary<char, char>();
        Dictionary<char, bool> marked = new Dictionary<char, bool>();
        for(int i=0; i<m; i++)
        {
            if(hash.ContainsKey(s[i])){
                
                
                
                if(hash[s[i]] != t[i])
                    return false;
                
                    
            }
            else
            {
                hash.Add(s[i], t[i]);
                if(marked.ContainsKey(t[i]))
                    return false;
                else
                    marked.Add(t[i], true);
            }
                
        }
        
        return true;
    }
}