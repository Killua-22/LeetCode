public class Solution {
    public int[][] Merge(int[][] intervals) {
        
        var res = new List<int[]>();
        Array.Sort(intervals, (arr1, arr2) => arr1[0].CompareTo(arr2[0]));
        res.Add(intervals[0]);
        
        for (int i = 1; i < intervals.Length; i++) {        
            if (res[^1][1] >= intervals[i][0]) 
                res[^1][1] = Math.Max(res[^1][1], intervals[i][1]);
            else 
                res.Add(intervals[i]);
        }
        
        return res.ToArray();
    }
}