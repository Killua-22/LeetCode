public class Solution {
    public string ReverseWords(string s) {

        while (s.Contains("  ")) 
            s=s.Replace("  ", " ");
        
        
        
        string[] a = s.Split(' ');

        a = a.Where(x => !string.IsNullOrEmpty(x)).ToArray();

        Array.Reverse(a);

        string final = string.Join(" ", a);
        
        return final;

    }
}