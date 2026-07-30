class Solution {
    public int longestSubarray(int[] arr, int k) {
        // code here
        Map<Integer, Integer> map = new HashMap<>();

        int prefixSum = 0;
        int maxLength = 0;

        // Prefix sum 0 exists before the array begins
        map.put(0, -1);

        for (int right = 0; right < arr.length; right++) {
            prefixSum += arr[right];

            if (map.containsKey(prefixSum - k)) {
                int leftIndex = map.get(prefixSum - k);
                int length = right - leftIndex;
                maxLength = Math.max(maxLength, length);
            }

            // Preserve the earliest index to obtain the longest subarray
            map.putIfAbsent(prefixSum, right);
        }

        return maxLength;
        
    }
}
