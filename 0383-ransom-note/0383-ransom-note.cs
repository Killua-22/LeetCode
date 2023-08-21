public class Solution {
    public bool CanConstruct(string ransomNote, string magazine) {
        Dictionary<char, int> hash = new Dictionary<char, int>();
        
        for(int i=0; i<magazine.Length; i++)
        {
            if(hash.ContainsKey(magazine[i]))
                hash[magazine[i]]++;
            else
                hash.Add(magazine[i], 1);
               
        }
        
        for(int i=0; i<ransomNote.Length; i++)
        {
            if(hash.ContainsKey(ransomNote[i]) && hash[ransomNote[i]] > 0)
                hash[ransomNote[i]]--;
            else
                return false;
        }
        
        return true;
    }
}