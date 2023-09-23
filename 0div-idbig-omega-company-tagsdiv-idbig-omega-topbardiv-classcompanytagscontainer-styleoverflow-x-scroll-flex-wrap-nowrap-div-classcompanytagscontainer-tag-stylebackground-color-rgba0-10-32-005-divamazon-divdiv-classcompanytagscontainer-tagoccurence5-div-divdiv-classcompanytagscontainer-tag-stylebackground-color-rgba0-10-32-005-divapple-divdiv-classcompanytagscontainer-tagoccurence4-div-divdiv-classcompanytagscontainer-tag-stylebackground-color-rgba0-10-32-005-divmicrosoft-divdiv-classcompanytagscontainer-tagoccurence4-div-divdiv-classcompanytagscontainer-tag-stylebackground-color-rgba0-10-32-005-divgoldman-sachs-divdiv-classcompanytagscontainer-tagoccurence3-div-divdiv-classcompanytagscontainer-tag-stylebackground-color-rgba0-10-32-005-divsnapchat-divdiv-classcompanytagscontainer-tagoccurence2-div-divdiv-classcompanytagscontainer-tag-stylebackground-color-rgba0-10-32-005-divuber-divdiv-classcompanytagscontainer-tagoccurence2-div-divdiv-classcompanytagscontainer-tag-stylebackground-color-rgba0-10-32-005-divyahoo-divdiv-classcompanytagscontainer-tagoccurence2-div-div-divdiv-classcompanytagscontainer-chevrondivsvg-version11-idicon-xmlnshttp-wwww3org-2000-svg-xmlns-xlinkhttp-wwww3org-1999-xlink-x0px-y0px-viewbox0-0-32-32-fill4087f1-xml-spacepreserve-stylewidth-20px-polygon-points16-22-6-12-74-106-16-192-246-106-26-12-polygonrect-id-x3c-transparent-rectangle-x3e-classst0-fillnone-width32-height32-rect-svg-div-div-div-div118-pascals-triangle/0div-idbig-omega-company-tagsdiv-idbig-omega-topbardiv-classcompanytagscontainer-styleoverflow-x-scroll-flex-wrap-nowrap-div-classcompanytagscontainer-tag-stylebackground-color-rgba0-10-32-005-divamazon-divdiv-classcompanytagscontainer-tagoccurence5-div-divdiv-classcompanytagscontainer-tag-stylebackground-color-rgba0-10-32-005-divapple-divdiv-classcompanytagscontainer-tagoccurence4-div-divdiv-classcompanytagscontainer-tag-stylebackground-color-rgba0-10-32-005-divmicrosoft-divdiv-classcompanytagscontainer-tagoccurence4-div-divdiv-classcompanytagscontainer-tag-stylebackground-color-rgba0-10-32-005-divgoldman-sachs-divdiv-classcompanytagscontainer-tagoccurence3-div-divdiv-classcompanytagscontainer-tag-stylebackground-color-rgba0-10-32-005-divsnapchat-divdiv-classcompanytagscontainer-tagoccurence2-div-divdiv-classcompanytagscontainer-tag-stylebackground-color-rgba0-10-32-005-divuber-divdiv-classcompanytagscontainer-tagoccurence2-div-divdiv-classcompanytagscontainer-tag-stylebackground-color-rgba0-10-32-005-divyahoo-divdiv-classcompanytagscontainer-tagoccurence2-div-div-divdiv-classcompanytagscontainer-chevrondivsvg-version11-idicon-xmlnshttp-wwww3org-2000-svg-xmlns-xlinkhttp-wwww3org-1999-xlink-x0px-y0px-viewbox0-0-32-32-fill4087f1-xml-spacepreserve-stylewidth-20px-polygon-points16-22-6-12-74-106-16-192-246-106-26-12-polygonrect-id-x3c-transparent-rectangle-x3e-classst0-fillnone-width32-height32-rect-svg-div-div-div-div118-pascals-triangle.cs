public class Solution {
    public IList<IList<int>> Generate(int numRows) {
        List<IList<int>> res = new List<IList<int>>();
        if(numRows == 0) return res;
        
        res.Add(new List<int>() {1});
        
        for(int i=1; i<numRows; i++)
        {
            IList<int> previousRow = res[i - 1];
            IList<int> currentRow = new List<int>();
            
            currentRow.Add(1);
            
            for(int j=1; j<i; j++)
            {
                int sum = previousRow[j-1] + previousRow[j];
                currentRow.Add(sum);
            }
            currentRow.Add(1);
            res.Add(currentRow);
        }
        
        return res;
        
        return res;
    }
}