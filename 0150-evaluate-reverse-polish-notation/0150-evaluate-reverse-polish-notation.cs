public class Solution {
    public int EvalRPN(string[] tokens) {
        
        
        Stack<int> st = new Stack<int>();
        
        for(int i=0; i<tokens.Length; i++)
        {
            bool isNumeric = int.TryParse(tokens[i], out int num);
            if(isNumeric)
            {
                st.Push(num);
            }
            else
            {
                int temp = 0;
                int num2 = st.Pop();
                int num1 = st.Pop();
                
                if(tokens[i] == "+")
                    temp=num1 + num2;
                else if(tokens[i] == "-")
                    temp=num1 - num2;
                else if(tokens[i] == "*")
                    temp=num1 * num2;
                else if(tokens[i] == "/")
                    temp=num1 / num2;
                
                st.Push(temp);
            }
        }    
        
        
        return Convert.ToInt32(st.Peek());
    }
}