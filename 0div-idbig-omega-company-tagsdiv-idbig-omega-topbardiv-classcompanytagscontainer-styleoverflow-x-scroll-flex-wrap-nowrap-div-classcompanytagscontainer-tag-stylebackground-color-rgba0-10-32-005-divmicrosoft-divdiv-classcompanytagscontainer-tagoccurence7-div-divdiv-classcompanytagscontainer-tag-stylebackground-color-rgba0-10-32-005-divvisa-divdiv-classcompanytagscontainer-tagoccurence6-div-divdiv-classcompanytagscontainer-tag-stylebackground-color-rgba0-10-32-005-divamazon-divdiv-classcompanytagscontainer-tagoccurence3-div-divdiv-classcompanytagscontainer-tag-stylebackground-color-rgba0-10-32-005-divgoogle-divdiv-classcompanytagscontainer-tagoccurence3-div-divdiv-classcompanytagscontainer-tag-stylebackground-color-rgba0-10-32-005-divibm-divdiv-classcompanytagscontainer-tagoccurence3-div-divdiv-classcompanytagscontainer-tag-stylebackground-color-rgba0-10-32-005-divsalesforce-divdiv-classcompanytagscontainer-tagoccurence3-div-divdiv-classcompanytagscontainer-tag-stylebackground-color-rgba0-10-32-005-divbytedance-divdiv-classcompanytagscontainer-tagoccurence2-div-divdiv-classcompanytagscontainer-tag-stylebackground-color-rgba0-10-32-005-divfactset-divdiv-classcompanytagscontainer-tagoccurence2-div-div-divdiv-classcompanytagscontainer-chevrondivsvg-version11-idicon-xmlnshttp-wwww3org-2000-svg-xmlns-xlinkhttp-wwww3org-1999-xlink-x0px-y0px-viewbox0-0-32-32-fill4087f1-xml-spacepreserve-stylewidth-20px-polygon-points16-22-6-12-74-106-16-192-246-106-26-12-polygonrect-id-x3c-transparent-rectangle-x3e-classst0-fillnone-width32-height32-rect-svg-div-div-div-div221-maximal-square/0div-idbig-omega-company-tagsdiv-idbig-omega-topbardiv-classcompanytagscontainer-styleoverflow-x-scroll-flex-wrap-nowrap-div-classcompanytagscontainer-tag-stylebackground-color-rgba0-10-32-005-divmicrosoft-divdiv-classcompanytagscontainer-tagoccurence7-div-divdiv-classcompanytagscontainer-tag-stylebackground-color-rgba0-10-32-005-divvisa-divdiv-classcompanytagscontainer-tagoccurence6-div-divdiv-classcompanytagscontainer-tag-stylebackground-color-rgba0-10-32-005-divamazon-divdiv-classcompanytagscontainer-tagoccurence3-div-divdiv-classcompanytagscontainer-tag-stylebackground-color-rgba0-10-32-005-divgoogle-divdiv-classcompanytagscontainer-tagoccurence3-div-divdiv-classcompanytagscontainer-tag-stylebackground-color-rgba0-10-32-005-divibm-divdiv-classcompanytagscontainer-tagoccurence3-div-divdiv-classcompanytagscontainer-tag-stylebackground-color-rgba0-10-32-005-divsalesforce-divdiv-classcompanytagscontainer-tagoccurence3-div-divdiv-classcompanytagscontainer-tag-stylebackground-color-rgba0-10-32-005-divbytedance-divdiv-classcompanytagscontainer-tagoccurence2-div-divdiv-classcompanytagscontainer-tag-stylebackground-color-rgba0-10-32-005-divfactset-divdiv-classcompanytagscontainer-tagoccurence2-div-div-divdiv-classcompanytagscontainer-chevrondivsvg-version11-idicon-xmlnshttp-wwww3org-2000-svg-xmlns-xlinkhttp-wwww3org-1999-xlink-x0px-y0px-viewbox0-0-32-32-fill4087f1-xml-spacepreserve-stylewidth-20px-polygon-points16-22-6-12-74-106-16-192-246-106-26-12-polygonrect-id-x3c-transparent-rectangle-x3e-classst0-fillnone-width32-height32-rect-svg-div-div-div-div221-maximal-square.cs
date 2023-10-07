public class Solution {
    public int MaximalSquare(char[][] matrix) {
        int m = matrix.Length; 
        int n = matrix[0].Length;
        
        int[] pre = new int[n];
        int[] cur = new int[n];
        int s = 0;
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(i==0 || j==0 || matrix[i][j]=='0')
                {
                    cur[j] = matrix[i][j] - '0';
                }
                else
                {
                    cur[j] = Math.Min(pre[j-1], Math.Min(cur[j-1], pre[j])) + 1;
                    
                }
                s = Math.Max(s, cur[j]);
                
            }
            
            pre = cur;
            cur = new int[n];
                                      
        }
        
        return s*s;
    }
}