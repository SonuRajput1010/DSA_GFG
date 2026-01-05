class Solution {
    public int maxSubarrayXOR(int[] arr, int k) {
        // code here
        int n = arr.length;
        
        int i=0;
        int j =0;
        
        int sum = 0;
        int maximum = 0;
        
        while(j < n){
            
            sum ^= arr[j];
            
            if(j-i+1 == k){
        
                maximum = Math.max(maximum, sum);
                sum ^= arr[i];
                
                i++;
            }
            j++;
        }
        return maximum;
        
    }
}
