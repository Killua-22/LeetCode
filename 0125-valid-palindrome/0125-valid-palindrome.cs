public class Solution {
    public bool IsPalindrome(string s) {
        
        var query = s.Where(c => Char.IsLetterOrDigit(c)).Select(c => Char.ToLower(c));
        var arr = query.ToArray(); 
        Array.Reverse(arr); 
        
        return new string(query.ToArray()) == new string(arr); 

    }
}