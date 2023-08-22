public class Solution {
    public bool IsAnagram(string s, string t) {
        int n = s.Length;
        int m = t.Length;
        
        if(n != m)
            return false;
        
        Dictionary<char, int> hash = new Dictionary<char, int>();
        
        for(int i=0; i<n; i++)
        {
            if(hash.ContainsKey(s[i]))
                hash[s[i]]++;
            else
                hash.Add(s[i], 1);
        }
        
        for(int i=0; i<n; i++)
        {
            if(hash.ContainsKey(t[i]))
                hash[t[i]]--;
            else
                return false;
        }
        
        foreach(var item in hash)
        {
            if(item.Value > 0)
                return false;
            
        }
        
        return true;
    }
}