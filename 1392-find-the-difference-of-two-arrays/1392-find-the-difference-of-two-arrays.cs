public class Solution {
    public IList<IList<int>> FindDifference(int[] nums1, int[] nums2) {
        IList<IList<int>> answer = new List<IList<int>>();

        

        List<int> a = new List<int>();
        List<int> b = new List<int>();

        for(int i=0; i<nums1.Length; i++)
        {
            a.Add(nums1[i]);
        }
        for(int i=0; i<nums2.Length; i++)
        {
            b.Add(nums2[i]);
        }
        IEnumerable<int> common = a.Intersect(b).ToList();

        a.RemoveAll(x => common.Contains(x));
        b.RemoveAll(x => common.Contains(x));
        a = a.Distinct().ToList();
        b = b.Distinct().ToList();
        answer.Add(a);
        answer.Add(b);

        return answer;
        
    }
}