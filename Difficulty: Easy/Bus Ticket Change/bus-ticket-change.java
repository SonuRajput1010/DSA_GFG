class Solution {
    public boolean canServe(int[] arr) {
        // code here
        int i=0;
        int cnt5 = 0;
        int cnt10 = 0;
        while(i<arr.length){
            if(arr[i] == 5) cnt5++;
            
            else if(arr[i] ==10){
                cnt5--;
                cnt10++;
                if (cnt5 < 0) return false;  
            }
            else{
                if((cnt5 >=1 && cnt10 >=1) ){
                    cnt5--;
                    cnt10--;
                }
                else if(cnt5>=3) cnt5 -=3;
                
                else return false;
            }
            i++;
        }
        return true;
    }
}