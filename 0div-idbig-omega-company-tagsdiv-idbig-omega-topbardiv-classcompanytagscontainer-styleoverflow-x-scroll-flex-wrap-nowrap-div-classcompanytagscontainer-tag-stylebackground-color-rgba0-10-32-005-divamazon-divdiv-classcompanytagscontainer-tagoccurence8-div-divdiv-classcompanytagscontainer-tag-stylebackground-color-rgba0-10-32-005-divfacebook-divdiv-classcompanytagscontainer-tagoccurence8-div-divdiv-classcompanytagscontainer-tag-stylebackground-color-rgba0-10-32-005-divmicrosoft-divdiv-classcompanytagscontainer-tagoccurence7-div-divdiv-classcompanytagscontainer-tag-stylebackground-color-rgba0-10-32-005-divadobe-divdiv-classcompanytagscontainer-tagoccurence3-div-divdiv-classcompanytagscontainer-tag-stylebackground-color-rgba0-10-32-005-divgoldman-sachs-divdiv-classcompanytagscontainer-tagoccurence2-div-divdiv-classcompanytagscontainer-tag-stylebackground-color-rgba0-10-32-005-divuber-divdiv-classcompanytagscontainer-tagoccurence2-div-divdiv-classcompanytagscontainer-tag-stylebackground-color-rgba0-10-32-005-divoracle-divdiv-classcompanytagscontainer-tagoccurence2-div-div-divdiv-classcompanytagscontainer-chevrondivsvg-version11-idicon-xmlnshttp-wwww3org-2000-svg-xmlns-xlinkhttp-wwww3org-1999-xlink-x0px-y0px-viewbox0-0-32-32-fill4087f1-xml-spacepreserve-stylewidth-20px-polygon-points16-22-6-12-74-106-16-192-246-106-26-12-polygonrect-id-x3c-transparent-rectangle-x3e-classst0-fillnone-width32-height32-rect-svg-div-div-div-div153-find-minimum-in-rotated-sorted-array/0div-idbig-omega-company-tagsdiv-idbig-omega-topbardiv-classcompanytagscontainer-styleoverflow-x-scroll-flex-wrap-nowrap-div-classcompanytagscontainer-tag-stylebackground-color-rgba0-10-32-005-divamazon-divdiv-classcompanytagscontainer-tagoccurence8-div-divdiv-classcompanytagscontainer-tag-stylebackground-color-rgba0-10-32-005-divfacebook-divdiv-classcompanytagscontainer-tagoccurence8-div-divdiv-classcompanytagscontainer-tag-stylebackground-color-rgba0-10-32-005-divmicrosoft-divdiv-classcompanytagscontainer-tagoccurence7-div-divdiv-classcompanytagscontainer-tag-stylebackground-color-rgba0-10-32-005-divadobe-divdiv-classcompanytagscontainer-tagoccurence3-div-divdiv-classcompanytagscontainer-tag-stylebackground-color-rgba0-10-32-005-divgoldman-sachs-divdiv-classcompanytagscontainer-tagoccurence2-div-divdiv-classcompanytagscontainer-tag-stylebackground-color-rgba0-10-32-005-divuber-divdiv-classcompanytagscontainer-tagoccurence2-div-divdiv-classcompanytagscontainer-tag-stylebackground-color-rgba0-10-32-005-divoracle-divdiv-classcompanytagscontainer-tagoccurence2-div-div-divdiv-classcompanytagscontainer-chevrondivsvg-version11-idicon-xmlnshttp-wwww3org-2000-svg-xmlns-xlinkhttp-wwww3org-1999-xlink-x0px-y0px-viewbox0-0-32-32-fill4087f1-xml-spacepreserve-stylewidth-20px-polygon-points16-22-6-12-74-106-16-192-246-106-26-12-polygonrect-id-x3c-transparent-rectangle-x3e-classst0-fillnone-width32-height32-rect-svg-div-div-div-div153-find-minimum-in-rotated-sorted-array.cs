public class Solution {
    
//     public int binarysearch(int[] arr, int n)
//     {
//         int l = 0;
//         int r = n-1;
//         int ind = -1;
//         while(l<=r)
//         {
//             int mid = l + (r-l) / 2;
            
//             if(mid == 0 && arr[mid]<arr[mid+1])
//                 return mid;
//             else if(mid == 0 && arr[mid] > arr[mid+1])
//                 return mid+1;
//             else if(mid == n-1)
//                 return mid;
            
//             if(arr[mid] < arr[mid-1] && arr[mid] < arr[mid+1])
//                 ind = mid;
            
//             if(arr[mid] < arr[mid+1])
//                 r = mid-1;
//             else
//                 l = mid+1;
//         }
        
//         return ind;
//     }
    
    public int FindMin(int[] nums) {
//         int n = nums.Length;
//         if(n==1)
//             return nums[0];
        
//         int ind = binarysearch(nums, n);
        
//         return nums[ind];
        
        return nums.Min();
    }
}