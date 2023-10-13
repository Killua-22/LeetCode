public class Solution {

    
    public bool SearchMatrix(int[][] matrix, int target) {
        
        if(matrix == null || matrix.Length < 1 || matrix[0].Length<1)
            return false;
        
        int col = matrix[0].Length-1;
        int row = 0;
        
        while(row<=matrix.Length-1 && col>=0)
        {
            if(matrix[row][col] == target)
                return true;
            
            if(matrix[row][col] > target)
                col--;
            else
                row++;
        }
        return false;
    }
}