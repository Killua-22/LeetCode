public class Solution {
    
    public bool binarysearch(int[] arr, int n, int target)
    {
        int l = 0;
        int r = n-1;
        
        while(l<=r)
        {
            int mid = l + (r-l) / 2;
            
            if(arr[mid] == target)
                return true;
            
            if(arr[mid] < target)
                l = mid+1;
            else
                r = mid-1;
            
        }
        return false;
    }
    
    public bool SearchMatrix(int[][] matrix, int target) {
        int m = matrix.Length;
        int n = matrix[0].Length;
        if(m==1 && n==1)
            return matrix[0][0] == target;
        int i=0; 
        while(i<m)
        {
            if(matrix[i][n-1] < target)
                i++;
            else
                break;
        }
        if(i>=m) return false;
        return binarysearch(matrix[i], n, target);
        
    }
}