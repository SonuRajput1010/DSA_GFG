class Solution {
    public int solve(int[] arr,int n, int k) {
        // code here
        int count = 0;
        int oddCount =0;
        
        int i=0;
        int j=0;
        
        while(i<n){
            if(arr[i] % 2 == 1){
                oddCount++;
            }
            while(oddCount > k){
                if(arr[j] % 2 == 1){
                    oddCount--;
                }
                j++;
            }
            count += (i-j+1);
            i++;
            
        }
        return count;
    }
    public int countSubarrays(int[] arr, int k) {
        // code here
        int n = arr.length;
        
        return solve(arr,n,k)- solve(arr,n,k-1);
    }
}
