class Solution {
    public ArrayList<Integer> nextLargerElement(int[] arr) {
        // code here
        int n = arr.length;
        ArrayList<Integer> ans = new ArrayList<>();
        for(int i=0; i<n; i++) ans.add(-1);
        
        Stack<Integer> st = new Stack<>();
        
        for(int i=n-1; i>=0; i--){
            while(!st.isEmpty() && st.peek() <= arr[i]){
                st.pop();
            }
            if(!st.isEmpty()){
                ans.set(i,st.peek());
            }
            st.push(arr[i]);
        }
        
        return ans;
    }
}