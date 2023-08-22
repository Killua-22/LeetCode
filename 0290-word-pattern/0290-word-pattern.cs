public class Solution {
    public bool WordPattern(string pattern, string s) {
        
        Dictionary<char, string> hash = new Dictionary<char, string>();
        string[] words = s.Split(" ");
        Dictionary<string, bool> marked = new Dictionary<string, bool>();
        
        if(pattern.Length != words.Length)
            return false;
        
        for(int i=0; i<pattern.Length; i++)
        {
            if(hash.ContainsKey(pattern[i]))
            { 
                
                if(words[i] != hash[pattern[i]])
                    return false;
            }
            else
            {
                hash.Add(pattern[i], words[i]);
                if(marked.ContainsKey(words[i]) && marked[words[i]])
                    return false;
                else
                    marked.Add(words[i], true);
            }
        }
        
        return true;
        
    }
}