class Solution {
    public int findKRotation(int arr[]) {
        // Code here
        int n = arr.length;
        int ans = -1;
        int l = 0;
        int r = n-1;
        
        while(l<r){
            int mid = l + (r-l)/2;
            
            if(arr[mid] < arr[r]){
                r = mid;
            }
            else{
                l = mid+1;
            }
            
        }
        return r;
    }
}