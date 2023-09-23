public class Solution {
    public IList<int> GetRow(int rowIndex) {
        List<IList<int>> res = new List<IList<int>>();

        res.Add(new List<int>() {1});
       
        
        for(int i=1; i<=rowIndex; i++)
        {
            IList<int> prev = res[i-1];
            
            IList<int> temp = new List<int>();
            temp.Add(1);
            for(int j=1; j<i; j++)
            {
               int sum = prev[j-1] + prev[j];
                temp.Add(sum);
            }
            temp.Add(1);
            
            res.Add(temp);
        }
        
        return res[res.Count-1];
    }
    
    
}