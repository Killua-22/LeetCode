public class Solution {
    public string CountAndSay(int n) {
        
        string ans = "1";
        if(n==1)
            return ans;
        int i=1;
        while(i<n)
        {
            StringBuilder s = new StringBuilder();
            
            for(int j=0; j<ans.Length; j++)
            {
                int count = 1;
                while(j+1<ans.Length && ans[j] == ans[j+1])
                {
                    count++;
                    j++;
                }
                
                s.Append(count.ToString());
                s.Append(ans[j]);
                
                
            }
            
            
            ans = s.ToString();
            i++;
        }
        
        return ans;
        
    }
}