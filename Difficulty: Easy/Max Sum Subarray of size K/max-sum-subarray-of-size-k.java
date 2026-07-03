class Solution {
    public int maxSubarraySum(int[] arr, int k) {
        // Code here
        int n = arr.length;
        int maxSum = 0;
        int windowSum = 0;
        
        for(int i=0; i<k; i++){
            windowSum += arr[i];
        }
        maxSum = windowSum;
        
        for(int j=k ; j<n; j++){
            windowSum += arr[j];
            windowSum -= arr[j-k];
            
            maxSum = Math.max(maxSum,windowSum);
        }
        return maxSum;
        
    }
}