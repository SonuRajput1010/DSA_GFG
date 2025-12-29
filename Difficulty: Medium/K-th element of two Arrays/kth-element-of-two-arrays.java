class Solution {
    public int kthElement(int a[], int b[], int k) {
        // code here
        List<Integer> list = new ArrayList<>();
        
        for(int i=0; i<a.length; i++){
            list.add(a[i]);
        }
        for(int i=0; i<b.length; i++){
            list.add(b[i]);
        }
        
        Collections.sort(list);
        
        return list.get(k-1);
    }
}