public class Solution {
    
    public void swap(ref int a, ref int b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    
    public void Rotate(int[][] matrix) {
        int n = matrix.Length;
        int m = matrix[0].Length;
        
        for(int i=0; i<n; i++)
        {
            for(int j=i; j<m; j++)
            {
                swap(ref matrix[i][j],ref matrix[j][i]);   
            }
            
            int l = 0; 
            int r = m-1;
            
            while(l<=r)
            {
                swap(ref matrix[i][r],ref matrix[i][l]);
                l++;
                r--;
            }
        }
    }
}