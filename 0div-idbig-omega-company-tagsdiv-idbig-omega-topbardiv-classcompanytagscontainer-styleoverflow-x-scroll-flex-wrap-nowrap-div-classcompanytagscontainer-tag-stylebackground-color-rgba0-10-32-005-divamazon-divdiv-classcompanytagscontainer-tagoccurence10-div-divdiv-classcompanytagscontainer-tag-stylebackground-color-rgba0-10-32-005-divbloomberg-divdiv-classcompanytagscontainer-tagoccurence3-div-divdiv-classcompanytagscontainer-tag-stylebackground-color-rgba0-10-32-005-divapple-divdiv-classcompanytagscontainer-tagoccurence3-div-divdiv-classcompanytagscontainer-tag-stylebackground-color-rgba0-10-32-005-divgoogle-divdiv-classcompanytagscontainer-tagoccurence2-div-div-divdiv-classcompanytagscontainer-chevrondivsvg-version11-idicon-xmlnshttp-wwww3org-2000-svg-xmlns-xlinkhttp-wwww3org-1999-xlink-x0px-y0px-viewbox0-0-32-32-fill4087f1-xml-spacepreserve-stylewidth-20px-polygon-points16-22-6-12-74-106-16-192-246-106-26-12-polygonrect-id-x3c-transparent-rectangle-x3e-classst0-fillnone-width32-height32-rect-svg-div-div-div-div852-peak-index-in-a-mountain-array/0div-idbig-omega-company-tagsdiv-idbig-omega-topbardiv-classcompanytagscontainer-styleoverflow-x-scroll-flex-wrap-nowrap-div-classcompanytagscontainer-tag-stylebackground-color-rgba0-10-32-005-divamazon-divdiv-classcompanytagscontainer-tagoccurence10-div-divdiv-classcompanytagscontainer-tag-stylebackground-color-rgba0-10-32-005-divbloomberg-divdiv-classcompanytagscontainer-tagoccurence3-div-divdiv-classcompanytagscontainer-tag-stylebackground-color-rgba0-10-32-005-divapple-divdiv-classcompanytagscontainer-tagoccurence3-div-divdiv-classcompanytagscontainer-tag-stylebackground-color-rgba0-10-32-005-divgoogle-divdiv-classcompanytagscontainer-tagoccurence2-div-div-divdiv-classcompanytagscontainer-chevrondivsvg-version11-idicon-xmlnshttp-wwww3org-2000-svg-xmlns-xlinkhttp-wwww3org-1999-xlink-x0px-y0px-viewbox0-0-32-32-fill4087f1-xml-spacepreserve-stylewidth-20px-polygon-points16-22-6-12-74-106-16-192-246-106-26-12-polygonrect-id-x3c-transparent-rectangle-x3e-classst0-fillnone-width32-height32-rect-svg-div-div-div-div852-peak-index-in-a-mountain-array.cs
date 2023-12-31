public class Solution {
    public int PeakIndexInMountainArray(int[] arr) {
        int n =arr.Length;
        
        int l = 0;
        int r = n-1;
        
        while(l<=r)
        {
            int mid = l + (r-l)/2;
            
            if(mid == 0)
            {
                l++;
                continue;
            }
            
            if(mid == n-1)
            {
                r--;
                continue;
            }
            
            if(arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1])
                return mid;
            
            if(arr[mid] > arr[mid-1])
            {
                l = mid+1;
                continue;
            }
            else
            {
                r = mid-1;
                continue;
                    
            }
        }
        return -1;
            
    }
}