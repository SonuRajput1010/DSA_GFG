class Solution {
    public boolean canWePlace(int[] arr, int k, int dist){
        int cntCow = 1;
        int last = arr[0];
        
        for( int i=0; i<arr.length; i++){
            if(arr[i]-last >= dist){
                cntCow ++;
                last = arr[i];
            }
            if(cntCow >= k) return true;
        }
        
        return false;
    }
    public int aggressiveCows(int[] arr, int k) {
        // code here
        int n = arr.length;
        Arrays.sort(arr);
        
        int low = 1;
        int high = arr[n-1]-arr[0];
        
        // int ans = 1;
        while(low <= high){
            int dist = low + (high-low)/2;
            
            if(canWePlace(arr,k,dist)){
                // ans = dist;
                low = dist + 1;
            }
            else{
                high = dist-1;
            }
        }
        return high;
    }
}