public class Solution {
    
    public string[] map = new string[]
    {
        "",
        "",
        "abc",
        "def",
        "ghi",
        "jkl",
        "mno",
        "pqrs",
        "tuv",
        "wxyz",
        
    };
    
    public IList<string> LetterCombinations(string digits) {
        IList<string> res = new List<string>();
        if(string.IsNullOrEmpty(digits))
            return res;
        Backtrack(res, "", 0, digits);
        return res;
    }
    
    public void Backtrack(IList<string> result, string current, int index, string digits)
    {
        if(index == digits.Length)
        {
            result.Add(current);
            return;
        }
        
        int digit = digits[index] - '0';
        string letters = map[digit];
        
        for(int i=0; i<letters.Length; i++)
        {
            Backtrack(result, current + letters[i], index+1, digits);
        }
    }
}