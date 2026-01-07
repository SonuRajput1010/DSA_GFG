class Solution {
    ArrayList<Integer> countDistinct(int arr[], int k) {
        // code here
        HashMap<Integer,Integer> map = new HashMap<>();
        int count = 0;
        ArrayList<Integer> res = new ArrayList<>();
        int n = arr.length;
        
        
        for(int i=0; i<k; i++){
             map.put(arr[i], map.getOrDefault(arr[i],0)+1);
        }
        res.add(map.size());
        
        for(int i=k; i<n; i++){
            
            int out = arr[i-k];
            map.put(out,map.get(out)-1);
            
            if(map.get(out) == 0){
                map.remove(out);
            }
            
            int in = arr[i];
            map.put(in, map.getOrDefault(in,0)+1);
            res.add(map.size());
        }
        
        return res;
    }
}