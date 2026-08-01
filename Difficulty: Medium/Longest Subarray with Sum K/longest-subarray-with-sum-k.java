class Solution {
    public int longestSubarray(int[] arr, int k) {
        // code here
        int n = arr.length;
        Map<Integer,Integer> map = new HashMap<>();
        
        int prefSum = 0;
        int longest = 0;
        
        for(int i=0; i<n; i++){
            prefSum += arr[i];
            
            if(prefSum==k){
                longest = i+1;
            }
            
            if(map.containsKey(prefSum-k)){
                longest = Math.max(longest,i-map.get(prefSum-k));
            }
            if(!map.containsKey(prefSum)){
                map.put(prefSum,i);
            }
        }
        return longest;
    }
}
