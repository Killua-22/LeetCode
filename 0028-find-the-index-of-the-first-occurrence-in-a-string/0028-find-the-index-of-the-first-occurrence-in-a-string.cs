public class Solution {
    public int StrStr(string haystack, string needle) {
        if(haystack.Length < needle.Length) return -1;

        var count = -1;
        for(int i = 0; i < haystack.Length; i++)
            if(haystack[i] == needle[++count] && count == needle.Length - 1)
                return i - count;
            else if(haystack[i] != needle[count])
            {
                i = i - count;
                count = -1;
            }

        return -1; 
    }
}