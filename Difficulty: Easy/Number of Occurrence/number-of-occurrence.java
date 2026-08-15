class Solution {
    int leftSearch(int[] arr, int target){
        int n= arr.length;
        int l=0;
        int r = n-1;
        int ans =  -1;
        
        while(l<=r){
            int mid = l + (r-l)/2;
            
            if(arr[mid] == target){
                ans = mid;
               r = mid - 1;
            }
            else if(arr[mid] < target) l = mid+1;
            
            else r = mid-1;
        }
        return ans;
    }
    int rightSearch(int[] arr, int target){
        
        int n= arr.length;
        int l=0;
        int r = n-1;
        int ans = -1;
        
        while(l<=r){
            int mid = l + (r-l)/2;
            if(arr[mid] == target) {
                ans = mid;
                l = mid + 1;
            }
            else if(arr[mid] < target) {
                l = mid + 1;
            }
            else {
                r = mid - 1;
            }
        }
        return ans;
        
    }
    int countFreq(int[] arr, int target) {
        // code here
        int l = leftSearch(arr, target);
        int r = rightSearch(arr, target);

        if(l == -1) {
            return 0;
        }

        return r - l + 1;
        
    }
}
