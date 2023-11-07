class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int l = 0;
        int r = matrix.size()-1;
        
        while(l<r)
        {
            for(int i=0; i<r-l; i++)
            {
                int top = l;
                int bottom = r;
                
                //save the topLeft element
                int topLeft = matrix[top][l+i];
                
                //move bottom left to top left
                matrix[top][l + i] = matrix[bottom - i][l];
                
                //move bottom right to bottom left
                matrix[bottom - i][l] = matrix[bottom][r - i];
                
                //move top right to bottom right
                matrix[bottom][r - i] = matrix[top + i][r];
                
                //move top left to top right
                matrix[top + i][r] = topLeft;
            }
            
            r -= 1;
            l += 1;
        }
    }
};