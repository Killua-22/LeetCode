public class Solution {
    public string DecodeString(string s) {
        
        Stack<char> st = new Stack<char>();

        foreach(char ch in s)
        {
            if(ch != ']')
                st.Push(ch);
            else
            {
                string currentString = "";
                while(st.Peek()!='[')
                {
                    
                    currentString  += st.Pop();
                }
                st.Pop();
                int placeValue = 1;
                int number = 0;
                while(st.Count > 0 && Char.IsNumber(st.Peek()))
                {
                    number = number + (st.Pop() - '0') * placeValue;
                    placeValue *= 10;
                }

                while(number!=0)
                {
                    number--;
                    for(int i=currentString.Length-1; i>=0; i--)
                    {
                        st.Push(currentString[i]);
                    }
                }
            }
            
        }
        string result = "";
        while(st.Count>0)
        {
            result += st.Pop();
        }
        string r = "";
        for(int i=result.Length-1; i>=0; i--)
        {
            r+=result[i];
        }
        return r;
    }
}