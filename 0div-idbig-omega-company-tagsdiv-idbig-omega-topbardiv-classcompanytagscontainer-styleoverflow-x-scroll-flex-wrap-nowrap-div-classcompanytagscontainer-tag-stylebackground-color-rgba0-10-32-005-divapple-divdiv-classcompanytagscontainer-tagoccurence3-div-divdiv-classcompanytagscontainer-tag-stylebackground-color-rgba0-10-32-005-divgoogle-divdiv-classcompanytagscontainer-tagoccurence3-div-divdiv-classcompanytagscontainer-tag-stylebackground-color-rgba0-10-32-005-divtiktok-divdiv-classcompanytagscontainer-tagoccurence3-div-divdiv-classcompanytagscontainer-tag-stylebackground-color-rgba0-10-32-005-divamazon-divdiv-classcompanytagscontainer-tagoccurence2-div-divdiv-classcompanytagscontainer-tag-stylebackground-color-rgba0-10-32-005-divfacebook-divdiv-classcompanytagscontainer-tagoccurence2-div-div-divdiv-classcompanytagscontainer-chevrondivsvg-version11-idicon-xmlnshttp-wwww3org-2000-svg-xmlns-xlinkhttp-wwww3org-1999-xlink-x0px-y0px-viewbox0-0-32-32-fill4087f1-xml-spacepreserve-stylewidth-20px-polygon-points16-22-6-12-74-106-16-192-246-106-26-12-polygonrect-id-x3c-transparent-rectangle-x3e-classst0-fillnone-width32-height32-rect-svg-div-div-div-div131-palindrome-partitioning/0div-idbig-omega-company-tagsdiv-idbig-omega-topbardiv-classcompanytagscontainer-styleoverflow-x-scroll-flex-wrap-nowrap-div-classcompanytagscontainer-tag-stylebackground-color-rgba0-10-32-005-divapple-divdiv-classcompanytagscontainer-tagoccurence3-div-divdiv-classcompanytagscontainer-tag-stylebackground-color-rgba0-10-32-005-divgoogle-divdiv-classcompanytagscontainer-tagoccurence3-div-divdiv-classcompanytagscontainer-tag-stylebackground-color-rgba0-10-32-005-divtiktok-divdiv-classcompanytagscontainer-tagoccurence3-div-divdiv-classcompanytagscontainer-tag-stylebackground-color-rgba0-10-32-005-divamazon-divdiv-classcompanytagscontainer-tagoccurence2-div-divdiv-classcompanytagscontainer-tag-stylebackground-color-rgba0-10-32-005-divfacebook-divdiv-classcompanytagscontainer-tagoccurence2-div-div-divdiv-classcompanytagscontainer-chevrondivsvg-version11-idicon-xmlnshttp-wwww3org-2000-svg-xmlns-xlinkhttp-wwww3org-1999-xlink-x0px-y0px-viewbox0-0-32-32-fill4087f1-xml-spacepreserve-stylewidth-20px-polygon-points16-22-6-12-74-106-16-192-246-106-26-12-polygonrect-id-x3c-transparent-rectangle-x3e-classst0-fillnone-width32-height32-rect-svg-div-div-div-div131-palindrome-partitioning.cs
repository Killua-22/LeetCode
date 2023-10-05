public class Solution {
    public IList<IList<string>> Partition(string s) {
        List<IList<string>> res = new List<IList<string>>();
        helper(s, new List<string>(), res);
        return res;
    }
    
    public void helper(string s, List<string> partition, List<IList<string>> res)
    {
        
        if(string.IsNullOrEmpty(s))
        {           
            res.Add(new List<string>(partition));
            return;
        }
        
        for(int i=0; i<s.Length; i++)
        {
            var substring = s[..(i+1)];
            var reversed = new string(substring.Reverse().ToArray());
            if(substring == reversed)
            {
                partition.Add(substring);
                
                helper(s[(i+1)..], partition, res);
                
                partition.RemoveAt(partition.Count - 1);
            }
        }
    
    }
}