class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int left = 0;
        int right = arr.size()-1;
        
        while(left <= right) {
            
            int mid = (left + right)/2;
            
            if(mid == 0) {
                left++;
                continue;
            }
            if(mid == arr.size()-1)
            {
                right--;
                continue;
            }
            
            if(arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1])
                return mid;
            else if(arr[mid] > arr[mid-1]) {
                left = mid+1;
                continue;
            }
            else {
                right = mid-1;
                continue;
            }
            
        }
        
        return -1;
    }
};