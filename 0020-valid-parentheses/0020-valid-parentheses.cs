public class Solution {
    public bool IsValid(string s) {
        Stack st = new Stack();
        
        for(int i=0; i<s.Length; i++)
        {
            if(s[i] == '(')
                st.Push(')');
            else if(s[i]== '[')
            {
                st.Push(']');
            }
            else if(s[i] == '{')
                st.Push('}');
            else if(st.Count == 0 || (char)st.Pop() != s[i])
                return false;
        }
        
        if(st.Count == 0)
            return true;
        else return false;
    }
}