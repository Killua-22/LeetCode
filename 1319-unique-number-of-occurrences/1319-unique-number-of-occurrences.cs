public class Solution {
    public bool UniqueOccurrences(int[] arr) {
        Dictionary<int, int> mydict = new Dictionary<int, int>();

        for(int i=0 ;i<arr.Length; i++)
        {
            if(mydict.ContainsKey(arr[i]))
                mydict[arr[i]]++;
            else
                mydict.Add(arr[i], 1);
        }
        
        List<int> list = new List<int>();

        foreach(int value in mydict.Values)
        {
            list.Add(value);
        }

        return list.Distinct().ToList().Count() == list.Count();
    }
}