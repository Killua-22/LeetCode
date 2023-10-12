/**
 * // This is MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *     public int Get(int index) {}
 *     public int Length() {}
 * }
 */

class Solution {
    
    public int binarysearch(int l, int r, MountainArray mountainArr, int target, bool isLeft)
    {
        int ind = -1; 
        while(l<=r)
        {
            int mid = l + (r-l)/2;
           
            int m = mountainArr.Get(mid);
            if(m == target)
                ind = mid;
            if(isLeft)
            {
                if(m > target)
                    r = mid-1;
                else
                    l = mid+1;
            }
            else
            {
                if(m > target)
                    l = mid+1;
                else
                    r = mid-1;
            }
            
        }
        
        return ind;
    }
    
    public int FindInMountainArray(int target, MountainArray mountainArr) {
        int n = mountainArr.Length();
        
        int l = 0; 
        int r = n-1;
        int peak = -1;
        
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
            
            int x = mountainArr.Get(mid-1);
            int y = mountainArr.Get(mid);
            int z = mountainArr.Get(mid+1);
            
            
            
            if(y > x && y > z)
            {
                peak = mid;
                
                break;
            }
            
            if(x < y)
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
        
        if(mountainArr.Get(peak) == target)
            return peak;
        
        int leftsearch = binarysearch(0, peak-1, mountainArr, target, true);
        
        if(leftsearch != -1)
            return leftsearch;
        int rightsearch = binarysearch(peak+1, n-1, mountainArr, target, false);
        
        if(rightsearch != -1)
            return rightsearch; 
        return -1;
            
    }
}