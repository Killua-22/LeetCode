public class Solution {
    public int[] DailyTemperatures(int[] temperatures) {
        int len = temperatures.Length;
        int[] ans = new int[len];
        
        Stack<(int, int)> st = new Stack<(int, int)>();
        
        for(int i=0 ;i<len; i++)
        {
            while(st.Count>0 && temperatures[i]>st.Peek().Item1)
            {
                var ind = st.Pop().Item2;
                ans[ind] = i - ind;
            }
            st.Push((temperatures[i], i));
            
        }
        
        return ans;
    }
}