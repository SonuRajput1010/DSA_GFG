class Solution {
    public int findCeil(int[] arr, int x) {
        // code here
        int n = arr.length;
        int l =0;
        int r = n-1;
        
        int ans = -1;
        
        while(l<=r){
            int mid = l + (r-l)/2;
            
            if(arr[mid] >= x){
                ans = mid;
                r = mid-1;
            }
            else {
                l = mid+1;
            }
        }
        return ans;
    }
}
