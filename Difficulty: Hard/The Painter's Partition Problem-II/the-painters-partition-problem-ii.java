class Solution {
    public int canPaint(int[] arr, long mid){
        int noOfPainter = 1;
        long wallPaint = 0;
        
        for(int i=0; i<arr.length; i++){
            if(wallPaint + arr[i] <= mid){
                wallPaint += arr[i];
            }
            else{
                noOfPainter++;
                wallPaint = arr[i];
            }
        }
        return noOfPainter;
    }
    public int minTime(int[] arr, int k) {
        // code here
        int n = arr.length;
        
        if(k > n) return -1;
        
        long low = Integer.MIN_VALUE;
        long high = 0;
        for(int x : arr){
            low = Math.max(x,low);
            high += x;
        }
        
        while(low <= high){
            long mid = low + (high-low)/2;
            
            int noOfPainter = canPaint(arr, mid);
            
            if( noOfPainter > k){
                low = mid+1;
            }
            else {
                high = mid-1;
            }
        }
        return (int)low;
    }
}
