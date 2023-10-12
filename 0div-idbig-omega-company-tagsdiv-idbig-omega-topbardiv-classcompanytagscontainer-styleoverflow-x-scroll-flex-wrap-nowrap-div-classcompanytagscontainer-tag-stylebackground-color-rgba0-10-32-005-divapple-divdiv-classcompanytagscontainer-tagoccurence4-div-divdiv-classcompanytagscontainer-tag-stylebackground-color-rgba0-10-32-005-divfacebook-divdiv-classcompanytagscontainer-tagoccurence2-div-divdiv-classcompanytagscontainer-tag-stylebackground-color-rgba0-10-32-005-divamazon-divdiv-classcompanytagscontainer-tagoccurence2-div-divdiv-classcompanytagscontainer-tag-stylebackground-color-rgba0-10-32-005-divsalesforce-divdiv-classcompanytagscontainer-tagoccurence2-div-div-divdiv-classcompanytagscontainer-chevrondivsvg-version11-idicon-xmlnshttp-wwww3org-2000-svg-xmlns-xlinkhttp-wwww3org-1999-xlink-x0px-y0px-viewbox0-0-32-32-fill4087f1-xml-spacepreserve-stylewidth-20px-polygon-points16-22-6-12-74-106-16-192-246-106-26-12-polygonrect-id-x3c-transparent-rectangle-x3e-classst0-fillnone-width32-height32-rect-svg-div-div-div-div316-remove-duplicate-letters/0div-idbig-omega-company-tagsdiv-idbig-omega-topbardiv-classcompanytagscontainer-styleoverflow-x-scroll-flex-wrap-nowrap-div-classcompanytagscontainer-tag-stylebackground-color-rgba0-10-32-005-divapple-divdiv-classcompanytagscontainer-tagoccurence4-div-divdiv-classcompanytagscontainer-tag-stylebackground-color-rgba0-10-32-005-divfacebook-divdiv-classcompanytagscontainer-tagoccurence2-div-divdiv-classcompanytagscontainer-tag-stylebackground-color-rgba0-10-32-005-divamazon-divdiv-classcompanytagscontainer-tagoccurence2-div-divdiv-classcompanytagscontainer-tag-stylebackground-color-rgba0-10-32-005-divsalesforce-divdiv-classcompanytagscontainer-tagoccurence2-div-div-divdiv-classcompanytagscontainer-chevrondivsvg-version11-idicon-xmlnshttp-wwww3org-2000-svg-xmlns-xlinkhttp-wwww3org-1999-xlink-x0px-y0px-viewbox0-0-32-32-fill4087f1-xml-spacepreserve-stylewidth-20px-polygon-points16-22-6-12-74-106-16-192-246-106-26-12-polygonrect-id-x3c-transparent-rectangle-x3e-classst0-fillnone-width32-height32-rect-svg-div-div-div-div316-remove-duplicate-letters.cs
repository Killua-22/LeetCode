public class Solution {
    public string RemoveDuplicateLetters(string s) {
        int n = s.Length; 
        
        int[] frq = new int[26];
        for(int i=0; i<n; i++)
            frq[s[i]-'a']++;
        
        bool[] visited = new bool[26];
        Stack<char> st = new Stack<char>();
        
        for(int i=0; i<n; i++)
        {
            if(visited[s[i]-'a'])
            {
                frq[s[i]-'a']--;
                continue;
            }
            
            while(st.Count!=0 && st.Peek() > s[i] && frq[st.Peek()-'a'] > 0)
            {
                visited[st.Peek()-'a'] = false;
                st.Pop();
            }
            
            st.Push(s[i]);
            visited[s[i]-'a'] = true;
            frq[s[i]-'a']--;
        }
        
        char[] res = st.ToArray();
        Array.Reverse(res);
        return new string(res);
        
//         Stack<char> stack = new Stack<char>();
//         HashSet<char> seen = new HashSet<char>();
//         Dictionary<char, int> lastOcc = new Dictionary<char, int>();
//         for (int i = 0; i < s.Length; i++) {
//             lastOcc[s[i]] = i;
//         }
        
//         for (int i = 0; i < s.Length; i++) {
//             char c = s[i];
//             if (!seen.Contains(c)) {
//                 while (stack.Count > 0 && c < stack.Peek() && i < lastOcc[stack.Peek()]) {
//                     seen.Remove(stack.Pop());
//                 }
//                 seen.Add(c);
//                 stack.Push(c);
//             }
//         }
        
//         char[] result = stack.ToArray();
//         Array.Reverse(result);
//         return new string(result);
    }
}