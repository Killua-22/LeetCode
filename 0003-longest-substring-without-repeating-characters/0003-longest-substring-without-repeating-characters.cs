public class Solution {
    public int LengthOfLongestSubstring(string s) {
        List<char> letters = new List<char>();
        int maxLength = 0;

        foreach(char c in s){

            if(!letters.Contains(c))
                letters.Add(c);

            else{
                maxLength = Math.Max(maxLength, letters.Count);

                int index = letters.IndexOf(c);
                letters.RemoveRange(0, index+1);

                letters.Add(c);
            }
        }

        return Math.Max(maxLength, letters.Count);
    }
}