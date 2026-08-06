class Solution {
    public int longestKSubstr(String s, int k) {
        // code here
        Map<Character,Integer> map = new HashMap<>();
        int maxLen = -1;
        int l=0;
        
        for(int r=0; r<s.length(); r++){
            
            char ch = s.charAt(r);
            map.put(ch,map.getOrDefault(ch,0)+1);
            
            while(map.size() > k){
                
                char cLeft = s.charAt(l);

                map.put(cLeft, map.get(cLeft) - 1);
            
                if (map.get(cLeft) == 0) {
                    map.remove(cLeft);
                }
            
                l++;
            }
            if(map.size() == k) maxLen = Math.max(maxLen,r-l+1);
        }
        return maxLen;
    }
}