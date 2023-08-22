public class Solution {
    public IList<IList<string>> GroupAnagrams(string[] strs) {
        
        Dictionary<string, List<string>> hash = new Dictionary<string, List<string>>();
        
        foreach(string s in strs)
        {
            char[] arr = s.ToCharArray();
            
            Array.Sort(arr);
            
            String key =  new String(arr);
            
            if(!hash.ContainsKey(key))
                hash[key] = new List<string>();
            hash[key].Add(s);
            
        }
        
        return new List<IList<string>>(hash.Values);
        
    }
}