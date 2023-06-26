public class Solution {

    public string RemoveStars(string s) {
        
        Stack<char> stack = new Stack<char>();

        for(int i=0; i<s.Length; i++)
        {
            if(s[i]=='*' && stack.Count>0) 
                stack.Pop();
            else
                stack.Push(s[i]);

        }

        char[] ans = stack.ToArray();
        Array.Reverse(ans);
        string final = new string(ans);
        return final;
    }
}