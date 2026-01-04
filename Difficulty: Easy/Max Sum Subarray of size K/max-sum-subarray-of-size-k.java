class Solution {
    public int maxSubarraySum(int[] Arr, int k) {
        // Code here
        int n = Arr.length;
        int sum = 0;
        int temp = 0;
        
        for(int i=0; i<k; i++){
            temp += Arr[i];
        }
        sum = temp;
        for(int i=k; i<n; i++){
            sum += Arr[i]-Arr[i-k];
            temp = Math.max(temp,sum);
        }
        
        return temp;
    }
}