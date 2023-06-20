public class Solution {
    public string GcdOfStrings(string str1, string str2) {
        
        if(str2.Length > str1.Length)
        {
            return GcdOfStrings(str2, str1);
        }
        else if(!str1.StartsWith(str2))
        {
            return "";
        }
        else if(str2.Length == 0)
        {
            return str1;
        }
        else 
        {
            return GcdOfStrings(str1.Substring(str2.Length), str2);
        }
    }
}